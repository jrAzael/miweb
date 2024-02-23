#include <stdio.h>

int main (){
   int cal=0;
    printf ("ingresa la calificacion : ");
    scanf("%d", &cal);
    if (cal >= 70){
        printf(" felicicdaes aprobaste el curso\n");
    }else{
    printf("la calificacion minima aprobatoria es : 8 \n");
    }
    return 0;
}