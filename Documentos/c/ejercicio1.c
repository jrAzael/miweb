#include <stdio.h>

int main (){
    int contador=0;
    while( contador<1000){
        if(contador%3==0){
            printf("%d\n",contador);
        }
     contador ++;
    }
    return 0;
}