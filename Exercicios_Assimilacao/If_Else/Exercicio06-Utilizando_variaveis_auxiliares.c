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
    printf(" Valor de Y = %d \n\n", y);

    printf("Agora vamos fazer com que: \n");
    printf(" X passe a ter o valor de Y \n");
    printf(" e que Y passe a ter o valor de X \n");
}

/*
Exercico 06
Pe�a um n�mero ao usu�rio e armazene ele na vari�vel x.
Depois pe�a outro n�mero e armazene na vari�vel y.
Mostre esses n�meros.
Em seguida, fa�a com que x passe a ter o valor de y,
e que y passe a ter o valor de x.
*/
