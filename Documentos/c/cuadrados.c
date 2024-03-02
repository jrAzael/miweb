#include <stdio.h>

int main (){
    int contador=1;
    while (contador <=500){

        printf("%d,%d,%d\n",contador,contador*contador,contador*contador*contador);
        contador++;
    }
    return 0;
}