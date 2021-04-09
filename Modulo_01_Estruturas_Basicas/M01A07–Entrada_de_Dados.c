#include <stdio.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL,"Portuguese");

    int n;
    float m;
    printf("Digite um número inteiro: ");
    scanf("%d",&n);
    printf("Digite um número real: ");
    scanf("%f",&m);
    printf("Você acabou de digitar os valores %d e %.2f. Obrigado!\n", n, m);

    //Ler caracteres
    char r;
    printf("Digite uma letra: ");
    scanf("%c",&r);
    printf("Você digitou a letra %c", r);
}

/*  Lendo números
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

%e notação
#hd short int
%ld long int
%hu unsigned short
%u  unsigned
%lu unsigned long

*/
