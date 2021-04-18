#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int a = 4, b = 13 , c = 2;

    printf("%d > %d E %d > %d : %s",a ,b ,a ,c ,(a>b && a>c) ? "Verdadeiro" : "Falso");
}
/*

*/
