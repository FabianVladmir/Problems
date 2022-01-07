#define ancho 1024
#define alto 740
#include <iostream>
#include <allegro.h>
#include <string>
#include <conio.h>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <winalleg.h>
#include <fstream>

using namespace std;

//Musica 
MIDI   *musicaInicio;
MIDI   *musicaJuego;
SAMPLE *sonido_InicioJuego;
SAMPLE *sonido_InicioNivel;
SAMPLE *sonido_LadrilloRoto;
SAMPLE *sonido_RebotePelota;
SAMPLE *sonido_Revivir;
SAMPLE *sonido_VidaExtra;
SAMPLE *sonido_rebotaParedes;
SAMPLE *sonido_rebotaBase;
SAMPLE *sonido_vidaperdida;
SAMPLE *sonido_gameover;

BITMAP *buffer; // evitar el parpadeo;
BITMAP *logo;
BITMAP *panel; // score
BITMAP *recuadro; // juego
BITMAP *fondo1; 
BITMAP *fondo2;
BITMAP *fondo3;
BITMAP *fondo4;
BITMAP *fondo5;
BITMAP *gameover; 
BITMAP *lad1;
BITMAP *lad2;
BITMAP *lad3;
BITMAP *lad4;
BITMAP *lad5;
BITMAP *lad6;
BITMAP *lad7;
BITMAP *ladd;
BITMAP *pelota;
BITMAP *base;
BITMAP *base2; // destrutyendo la base
BITMAP *base3;
BITMAP *base4;


int retardo = 100;
int vida = 3;
int nivel = 1;
int score = 0;
bool juego_inicio = false;
bool fin = false;
bool nuevo_nivel = false;
bool juego = false;
bool muerto = false;
bool musica = true;
bool efectos = true;
bool existe_archivo = false;
int dirY = -1;
int dirX = 1;
int velocidad_base = 3;
int velocidad_inicial = 3;
int fondoN = 1;
int secuancia_Muerte = 1;
int high_Score = 0;
int base_X = 255;
int base_Y = 295;
int bola_Y = 650;
int mapa[63];

int limite_izquierda;
int limite_derecha;

int columna_bola;
int fila_bola;
int elemento;
int fila[] = {20, 50, 80, 110, 140, 170, 200};

int main(){
    
    if (inicializo() == 1)
    {
        return 1;
    }
    
    while (!fin)
    {
        armo_pantalla();

        if (key[KEY_ESC])
        {
            fin = true;
        }
        if (key[KEY_ENTER] && juego_inicio == false)
        {
            jugar();
        }
        
    }
    


}
END_OF_MAIN();

int inicializo(){

    allegro init();
    install_keyboard();

    if (install_sound(DIGI_AUTODETECT, MIDI_AUTODETECT, NULL) != 0)
    {
        allegro_message("Error: inicializando sistema de sonido\n%s\n", allegro_error);
        return 1;
    }
    
    inicializo_pantalla();
    inicializo_sonido();

    return 0;

}

void inicializo_pantalla(){

    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT, ancho, alto, 0, 0); // entorno grafico
    /*los 2 valores en 0 se usan para extender nuestra ventana con pixeles adicionales que se mantedra oculto
    para luego hacer scroling */

    bufer = create_bitmap(ancho,alto);
    logo = load_bitmap("img/logo.bmp", NULL);
    panel = load_bitmap("img/panel.bmp",NULL);
    recuadro=load_bitmap("img/recuadro.bmp",NULL);
    fondo1=load_bitmap("img/fondo1.bmp",NULL);
    fondo2=load_bitmap("img/fondo2.bmp",NULL);
    fondo3=load_bitmap("img/fondo3.bmp",NULL);
    fondo4=load_bitmap("img/fondo4.bmp",NULL);
    fondo5=load_bitmap("img/fondo5.bmp",NULL);
    lad1=load_bitmap("img/ladrillo1.bmp",NULL);
    lad2=load_bitmap("img/ladrillo2.bmp",NULL);
    lad3=load_bitmap("img/ladrillo3.bmp",NULL);
    lad4=load_bitmap("img/ladrillo4.bmp",NULL);
    lad5=load_bitmap("img/ladrillo5.bmp",NULL);
    lad6=load_bitmap("img/ladrillo6.bmp",NULL);
    lad7=load_bitmap("img/ladrillo7.bmp",NULL);
    ladd=load_bitmap("img/ladrilloduro.bmp",NULL);
    gameover=load_bitmap("img/gameover.bmp",NULL);
    pelota=load_bitmap("img/pelota.bmp",NULL);
    base=load_bitmap("img/base.bmp",NULL);
    base2=load_bitmap("img/base2.bmp",NULL);
    base3=load_bitmap("img/base3.bmp",NULL);
    base4=load_bitmap("img/base4.bmp",NULL);

}

void inicializo_sonido(){
    set_volume(230, 200);
    // midi load loop wav not
	musicaInicio  = load_midi("sonidos/ark.mid");
    musicaJuego   = load_midi("sonidos/Arkanoid.mid");
	sonido_InicioJuego = load_wav("sonidos/InicioJuego.wav");
    sonido_InicioNivel = load_wav("sonidos/InicioNivel.wav");
	sonido_LadrilloRoto = load_wav("sonidos/LadrilloRoto.wav");
	sonido_RebotePelota = load_wav("sonidos/RebotePelota.wav");
	sonido_VidaExtra = load_wav("sonidos/VidaExtra.wav");
	sonido_rebotaParedes = load_wav("sonidos/rebotaParedes.wav");
	sonido_rebotaBase = load_wav("sonidos/reboteBase.wav");
    sonido_vidaperdida = load_wav("sonidos/fallo.wav");
    sonido_gameover = load_wav("sonidos/game-over.wav");
}

void armo_pantalla(){
    try
    {
       clear_to_color(buffer, 0x000000);
       draw_sprite(buffer,logo,610,5);
       draw_sprite(buffer,panel,620,140);
       textprintf_ex(panel, arialB, 130, 3, makecol(0,0,0),makecol(0,0,0), "          ");
       textprintf_ex(panel, arialB, 160, 65, makecol(0,0,0),makecol(0,0,0), "         ");
       textprintf_ex(panel, arialB, 130, 130, makecol(0,0,0),makecol(0,0,0), "        ");

       textprintf_ex(panel, arialB, 130, 3, makecol(255,0,0),makecol(0,0,0), "%d", level);
       textprintf_ex(panel, arialB, 160, 65, makecol(255,0,0),makecol(0,0,0), "%d", score);
       textprintf_ex(panel, arialB, 130, 130, makecol(255,0,0),makecol(0,0,0), "%d", vidas);

       textprintf_ex(buffer, arial20, 700, 100, makecol(255,255,255),makecol(0,0,0), "Highscore : %i", highScore);

       draw_sprite(buffer,recuadro,5,10);
       switch(fondoN)
       {
            case 1: draw_sprite(buffer,fondo1,11,16);
                    break;
            case 2: draw_sprite(buffer,fondo2,11,16);
                    break;
            case 3: draw_sprite(buffer,fondo3,11,16);
                    break;
            case 4: draw_sprite(buffer,fondo4,11,16);
                    break;
            case 5: draw_sprite(buffer,fondo5,11,16);
                    break;
        }

        if (!muerte) {
           draw_sprite(buffer,base,baseX,660);
        } else {
           switch(secuenciaMuerte)
           {
           case 1: draw_sprite(buffer,base2,baseX,655);
                   break;
           case 2: draw_sprite(buffer,base3,baseX,650);
                   break;
           case 3: draw_sprite(buffer,base4,baseX,640);
                   break;
           }
        }
        if(enJuego){
           circlefill(buffer, bolaX,bolaY, 10, makecol(124,250,16));
        } else {
           bolaX=baseX+50;
           circlefill(buffer, bolaX, bolaY, 10, makecol(124,250,16));
        }
        muestro_ladrillos();
        if(vidas==0) draw_sprite(buffer,gameover,150,300);

        blit(buffer, screen, 0,0,0,0,ancho, alto);
    }
    catch (exception& e)
       {
        cout << e.what() << endl;
    }
}
}