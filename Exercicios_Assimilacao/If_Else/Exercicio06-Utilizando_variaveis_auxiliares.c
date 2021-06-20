#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int x, y;

    printf("Indique um número inteiro: ");
    fflush(stdin);
    scanf("%d",&x);
}

/*
Exercico 06
Peça um número ao usuário e armazene ele na variável x.
Depois peça outro número e armazene na variável y.
Mostre esses números.
Em seguida, faça com que x passe a ter o valor de y,
e que y passe a ter o valor de x.
*/
