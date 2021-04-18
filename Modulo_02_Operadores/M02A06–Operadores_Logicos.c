#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int a = 4, b = 13 , c = 2;
    printf("Conjun��o \n");
    printf("%d > %d E %d > %d : %s \n",a ,b ,a ,c ,(a>b && a>c) ? "Verdadeiro" : "Falso");
    printf("\nDisjun��o \n");
    printf("%d > %d OU %d > %d : %s \n",a ,b ,a ,c ,(a>b || a>c) ? "Verdadeiro" : "Falso");

    printf("\nExemplo 2:\n");
    a = 5;
    b = 4;
    c = 2;
    printf("%s \n",((a > b || a < c && !c!=4) ? "Verdadeiro" : "Falso"));
    //                 V   OU   F   && N�O V
    //                 V   OU   F   &&   F
    //                 V   OU        F
    //                      V
}
/*
&&  Operador de conjun��o e

|| operador de Disjun��o ou

! operador de nega��o
*/

/*
Ordem de precedencia dos operadores l�gicos

! Nega��o primeiro

&& Conjun��o segundo

|| Disjun��o no final

*/
