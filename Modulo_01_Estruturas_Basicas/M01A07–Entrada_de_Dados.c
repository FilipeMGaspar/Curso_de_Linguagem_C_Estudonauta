#include <stdio.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL,"Portuguese");

    //Ler números inteiros
    //int n;
    //float m;
    //printf("Digite um numero inteiro: ");
    //scanf("%d",&n);
    //printf("Digite um numero real: ");
    //scanf("%f",&m);
    //printf("Voce acabou de digitar os valores %d e %.2f. Obrigado!\n", n, m);

    //Ler caracteres
    //char r;
    //char s;
    //printf("Digite uma letra: ");
    //fflush(stdin); //Limpa o buffer do teclado
        //scanf("%c",&r);
    //r = getchar();
    //printf("Digite outra letra: ");
    //fflush(stdin); //Limpa o buffer do teclado
        //scanf("%c",&s);
    //s = getchar();
    //printf("Voce digitou as letra \"%c\" e \"%c\"", r, s);

    //Ler Strings
    char nome[30];
    printf("Digite o seu nome: ");
    gets(nome); //leitura de string
    printf("Voce digitou \"%s\" ", nome);
}

/*  Lendo números
    int num;
    float media;

    scanf("%d", &num);
    scanf("%f", &media);
*/

/*Lendo Caracteres
    char resp;
    scanf("%c",&resp);
    resp = getchar(); //Para caracter
*/

/* Lendo String
    char nome[30];
    gets(nome);
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
