#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int a = 4, b = 13 , c = 2;
    printf("Conjunção \n");
    printf("%d > %d E %d > %d : %s \n",a ,b ,a ,c ,(a>b && a>c) ? "Verdadeiro" : "Falso");
    printf("\nDisjunção \n");
    printf("%d > %d OU %d > %d : %s \n",a ,b ,a ,c ,(a>b || a>c) ? "Verdadeiro" : "Falso");

    printf("\nExemplo 2:\n");
    a = 5;
    b = 4;
    c = 2;
    printf("%s \n",((a > b || a < c && !c!=4) ? "Verdadeiro" : "Falso"));
    //                 V   OU   F   && NÃO V
    //                 V   OU   F   &&   F
    //                 V   OU        F
    //                      V
}
/*
&&  Operador de conjunção e

|| operador de Disjunção ou

! operador de negação
*/

/*
Ordem de precedencia dos operadores lógicos

! Negação primeiro

&& Conjunção segundo

|| Disjunção no final

*/
