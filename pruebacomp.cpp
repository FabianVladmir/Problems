#include <iostream>
#include <utility>
#define pos pair<int,in>
using namespace std;

pos dir_start = {0,1};
pos pos_start ={0,0};

void avanzar(pos &p, int cantidad){
    pos aux = dir_start;
    aux.first = aux.first * cantidad;
    aux.second = aux.second * cantidad;
    pos = aux;
}

void girar(pos p, char dir){
    if(dir == 'N'){
        dir_start.first = 0;
        dir_start.second = 1;
    }
    if(dir == 'O'){
        dir_start.first = 1;
        dir_start.second = 0;
    }
    if(dir == 'S'){
        dir_start.first = 0;
        dir_start.second = -1;
    }
    else{
        dir_start.first = -1;
        dir_start.second = 0;
    }
}

int main(){
    pos pos_end = {3,0};
    while (pos_start != pos_end)
    {
        avanzar(pos_start,7);
        girar(pos_start, 'E');
        avanzar(pos_start,2);
        girar(pos_start,'N');
        avanzar(pos_start,5);
        girar(pos_start,'S');
        avanzar(pos_start,2);
        girar(pos_start,'E');
        avanzar(pos_start,1);
        girar(pos_start,'S');
        avanzar(pos_start,7);




    }
    



    return 0;
}