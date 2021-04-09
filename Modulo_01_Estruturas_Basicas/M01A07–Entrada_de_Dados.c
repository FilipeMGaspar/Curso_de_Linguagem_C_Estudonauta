#include <stdio.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL,"Portuguese");

    //Ler números inteiros
    int n;
    float m;
    printf("Digite um numero inteiro: ");
    scanf("%d",&n);
    printf("Digite um numero real: ");
    scanf("%f",&m);
    printf("Voce acabou de digitar os valores %d e %.2f. Obrigado!\n", n, m);

    //Ler caracteres
    char r;
    char s;
    printf("\nDigite uma letra: ");
    fflush(stdin); //Limpa o buffer do teclado
    r = getchar();
    printf("Digite outra letra: ");
    fflush(stdin); //Limpa o buffer do teclado
    s = getchar();
    printf("Voce digitou as letra \"%c\" e \"%c\"", r, s);

    //Ler Strings
    char nome[30];
    char endereco[40];

    printf("\n\n");
    printf("Digite o seu nome: ");
    fflush(stdin); //Limpa o buffer do teclado
    gets(nome); //leitura de string
    printf("Digite a sua morada: ");
    fflush(stdin); //Limpa o buffer do teclado
    gets(endereco); //leitura de string
    printf("Sr. %s ", nome);
    printf("\n%s \n", endereco);
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
