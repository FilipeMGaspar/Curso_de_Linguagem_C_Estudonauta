#include <stdio.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL,"Portuguese");

    int n;
    float m;
    printf("Digite um n�mero inteiro: ");
    scanf("%d",&n);
    printf("Digite um n�mero real: ");
    scanf("%f",&m);
    printf("Voc� acabou de digitar os valores %d e %.2f. Obrigado!\n", n, m);

    //Ler caracteres
    char r;
    printf("Digite uma letra: ");
    scanf("%c",&r);
    printf("Voc� digitou a letra %c", r);
}

/*  Lendo n�meros
    int num;
    float media;

    scanf("%d", &num);
    scanf("%f", &media);
*/

/*Lendo Caracteres
    char resp;
    scanf("%c",&resp); //vai dar erro
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
