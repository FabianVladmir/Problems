#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string replacement(string s){   

    string cad(s);
    for (size_t i = 0; i < s.size(); i++)
    {
        if(s[i] == 'j' || s[i] == 'h')
            cad[i] = 'i';
        else if(s[i] == 'ñ')
            cad[i] = 'n';
        else if(s[i] == 'k')
            cad[i] = 'l';
        else if(s[i] == 'u' || s[i] == 'w')
            cad[i] = 'v';
        else if(s[i] == 'y')
            cad[i] = 'z';
    } 
    return cad;   
}

void removetilde(string s){


}

string transformUpper(string s){
    string cad(s);
    for_each(cad.begin(), cad.end(), [](char & c) {
        c = ::toupper(c);
    });
    
    return cad;
}


string txt = {
" Hay golpes en la vida, tan fuertes... ¡Yo no sé!
Golpes como del odio de Dios; como si ante ellos,
la resaca de todo lo sufrido
se empozara en el alma... ¡Yo no sé!
Son pocos; pero son ... Abren zanjas oscuras
en el rostro más fiero y en el lomo más fuerte.
Serán tal vez los potros de bárbaros Atilas;
o los heraldos negros que nos manda la Muerte.
Son las caídas hondas de los Cristos del alma
de alguna fe adorable que el Destino blasfema.
Esos golpes sangrientos son las crepitaciones
de algún pan que en la puerta del horno se nos quema.
Y el hombre... Pobre... ¡pobre! Vuelve los ojos, como
cuando por sobre el hombro nos llama una palmada;
vuelve los ojos locos, y todo lo vivido
se empoza, como charco de culpa, en la mirada.
Hay golpes en la vida, tan fuertes... ¡Yo no sé!; ";};

int main(){    

    string str;
    str = replacement(txt);
    str = transformUpper(str);




    return 0;
}