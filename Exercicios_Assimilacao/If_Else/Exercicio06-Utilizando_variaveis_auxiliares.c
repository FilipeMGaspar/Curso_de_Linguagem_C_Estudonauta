#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int x, y;

    printf("Indique um n�mero inteiro: ");
    fflush(stdin);
    scanf("%d",&x);
    printf("Indique outro n�mero inteiro: ");
    fflush(stdin);
    scanf("%d", &y);

    printf("\n Valor de X = %d \n", x);
    printf("Valor de Y = %d \n\n", y);
}

/*
Exercico 06
Pe�a um n�mero ao usu�rio e armazene ele na vari�vel x.
Depois pe�a outro n�mero e armazene na vari�vel y.
Mostre esses n�meros.
Em seguida, fa�a com que x passe a ter o valor de y,
e que y passe a ter o valor de x.
*/
