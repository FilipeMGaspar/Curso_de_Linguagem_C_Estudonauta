#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int a = 4, b = 13 , c = 2;
    printf("Conjun��o \n");
    printf("%d > %d E %d > %d : %s \n",a ,b ,a ,c ,(a>b && a>c) ? "Verdadeiro" : "Falso");
    printf("\nDisjun��o \n");
    printf("%d > %d OU %d > %d : %s \n",a ,b ,a ,c ,(a>b || a>c) ? "Verdadeiro" : "Falso");
}
/*
&&  Operador de conjun��o e

|| operador de Disjun��o ou

! operador de nega��o
*/
