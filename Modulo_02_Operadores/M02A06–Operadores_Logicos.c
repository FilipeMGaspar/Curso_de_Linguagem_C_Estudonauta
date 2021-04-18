#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int a = 4, b = 13 , c = 2;
    printf("Conjunção \n");
    printf("%d > %d E %d > %d : %s \n",a ,b ,a ,c ,(a>b && a>c) ? "Verdadeiro" : "Falso");
    printf("\nDisjunção \n");
    printf("%d > %d OU %d > %d : %s \n",a ,b ,a ,c ,(a>b || a>c) ? "Verdadeiro" : "Falso");
}
/*
&&  Operador de conjunção e

|| operador de Disjunção ou

! operador de negação
*/
