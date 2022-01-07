#include <iostream>

using namespace std;
void copy_char(char *, char *);

int main(){
    char cad_a [255] = "cadena";
    char cad_b[255] = "Segunda cadena";
    cout << "cadena_b antes de copy_char: " << cad_b << endl;
    cout << "cadena_b despues de llamar a copy_char: ";
    copy_char(cad_a, cad_b);

    cout << cad_b << endl;
    
    return 0;
}

void copy_char(char *n , char *m){
    
    while(*m++ = *n++);
}
   