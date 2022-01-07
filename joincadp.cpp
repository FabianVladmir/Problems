#include <iostream>
using namespace std;
void unir_char(char *, char *);


int main(){
    char cad_a[255] = "Esto es una prueba";
    char cad_b[255] = " que concadena dos cadenas char";
    
    unir_char(cad_a, cad_b);
    cout << cad_a << endl;
    return 0;
}

void unir_char(char *a , char *b ){
    char *i, *j;
    for ( i = a; *i != '\0'; i++)
    {
        ;
    }
    for ( j = b; *j != '\0'; j++, i++)
    {
       *i = * j;
    }
    *i = '\0';
}

