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
    fflush(stdin); //Limpa o buffer do teclado
    //scanf("%c",&r);
    r = getchar();
    printf("Digite outra letra: ");
    fflush(stdin); //Limpa o buffer do teclado
    //scanf("%c",&s);
    s = getchar();
    printf("Voce digitou as letra \"%c\" e \"%c\"", r, s);
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
    resp = getchar(); //Para caracter
*/

/*
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
