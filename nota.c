#include <stdio.h>
int main() {
int nota;
printf(" Inserte una nota: ");
 scanf("%d",&nota);
switch(nota) {
case 0: printf("\nSuspenso"); 
break;
case 10: printf("\nSuspenso"); 
break;
case 20: printf("\nSuspenso"); 
break;
case 30: printf("\nSuspenso");
 break;
case 40: printf("\nSuspenso");
 break;
case 50: printf("\nAprobado"); 
break;
case 60: printf("\nBien"); 
break;
case 70: printf("\nNotable"); 
break;
case 80: printf("\nNotable"); 
break;
case 90: printf("\nSobresaliente"); 
break;
case 100: printf("\nSobresaliente"); 
break;
default: printf("esa nota es incorrecta");
}
return 0;
}