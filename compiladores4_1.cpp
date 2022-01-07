/* Analizador Sintáctico de Infija a Postfija 
 Exp --> Term Resto
 Resto --> + Term {printf("+")} Resto
 Resto --> - Term {printf("-")} Resto
 Resto -->
 Term --> {printf("0")} 0
 Term --> {printf("1")} 1
 Term --> {printf("2")} 2
 Term --> {printf("3")} 3
 Term --> {printf("4")} 4
 Term --> {printf("5")} 5
 Term --> {printf("6")} 6
 Term --> {printf("7")} 7
 Term --> {printf("8")} 8
 Term --> {printf("9")} 9
*/

#include<stdio.h>
#include <ctype.h>
int preanalisis;
void exp();
void parea (int);
void resto();
void term();
void error();

void exp(){

    if (isdigit(preanalisis))
    {
        term();
        resto();
    }else{
        error();
    }
    
}


void resto(){

    if (preanalisis == '+')
    {
        parea('+');
        term();
        printf("+");
        resto();
    }
    else if (preanalisis == '-')
    {
        parea('+');
        term();
        printf("-");
        resto();
    }else  ;
       
    
}

void term(){
    if (isdigit(preanalisis))
    {
        switch (preanalisis)
        {
        case '0':
            printf("0");
            parea(0);
            break;        

        case '1':
            printf("1");
            parea(1);
            break;
        case '2':
            printf("2");
            parea(2);
            break;   
        case '3':
            printf("3");
            parea(3);
            break;   
        case '4':
            printf("4");
            parea(4);
            break;   
        case '5':
            printf("5");
            parea(5);
            break;   
        case '6':
            printf("6");
            parea(6);
            break;   
        case '7':
            printf("7");
            parea(7);
            break;   
        case '8':
            printf("8");
            parea(8);
            break;   
        case '9':
            printf("9");
            parea(9);
            break;      
        // default:
        //     break;
        }

    }else{

        error();
    }
    
}

void error(){

    printf("Error de sintaxis\n");

}

void parea(int t){
    if (preanalisis == t)
    {
        preanalisis = getchar();
    }else{
        error();
    }
    
}


int main(void) {
  preanalisis=getchar(); //lee un carácter 
                           //de la entrada 
  exp(); 
  return 0;
}
