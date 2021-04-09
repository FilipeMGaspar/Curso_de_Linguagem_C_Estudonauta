#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int num;
    float media;

    printf("Digite a sua idade: ");
    scanf("%d", &num);
    printf("Digite o seu peso: ");
    scanf("%f", &media);

}

/*  Lendo números
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

%e notação
#hd short int
%ld long int
%hu unsigned short
%u  unsigned
%lu unsigned long

*/
