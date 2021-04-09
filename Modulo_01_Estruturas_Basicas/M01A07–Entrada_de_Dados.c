#include <stdio.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL,"Portuguese");

    //int n;
    //float m;
    //printf("Digite um numero inteiro: ");
    //scanf("%d",&n);
    //printf("Digite um numero real: ");
    //scanf("%f",&m);
    //printf("Voce acabou de digitar os valores %d e %.2f. Obrigado!\n", n, m);

    //Ler caracteres
    char r;
    char s;
    printf("Digite uma letra: ");
    scanf("%c",&r);
    printf("Digite outra letra: ");
    scanf("%c",&s);
    printf("Voce digitou as letra \"%c\" e \"%c\"", r, s);
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
