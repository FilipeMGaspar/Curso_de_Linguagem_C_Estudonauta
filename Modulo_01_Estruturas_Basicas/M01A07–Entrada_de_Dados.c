#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int n;
    float m;
    printf("Digite um n�mero inteiro: ");
    scanf("%d",&n);
    printf("Voc� acabou de digitar o valor %d. Obrigado!\n",n);
    printf("Digite um n�mero real: ");
    scanf("%f",&m);
    printf("Voc� acabou de digitar o valor %.2f. Obrigado!\n",m);

    /*
    int idade;
    float peso;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    printf("\n\n");
    printf("IDADE: %d",idade);
    printf("\nPESO: %.2f",peso);
    */
}

/*  Lendo n�meros
    int num;
    float media;

    scanf("%d", &num);
    scanf("%f", &media);
*/

/*
%d  int
%f  float/double
%c  char
%s  Cadeia = String

%e nota��o
#hd short int
%ld long int
%hu unsigned short
%u  unsigned
%lu unsigned long

*/
