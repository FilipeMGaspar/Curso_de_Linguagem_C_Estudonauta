#include <stdio.h>
#include <locale.h>
#include <string.h> //Para poder trabalhar com strings

void main(){
    setlocale(LC_ALL, "Portuguese");

    char s1[] = "Gustavo";
    char s2[] = "Guanabara";
    int res = strcmp(s1, s2);
    printf("O resultado da compara��o e %d \n", res);

    /*
    char nome[] = "Gustavo";
    int tam = strlen(nome);
    printf("o nome %s tem %d letras \n", nome, tam);
    */

   /*
   char sit[10];
    float media = 3.5;

    strcpy(sit, (media>=7) ? "Aprovado" : "Reprovado");
    printf("A sita��o do aluno �: %s\n", sit);
    */
}
/*
#include <string.h>

 strcpy(variavel, "String"); //copia o conteudo para uma string
 strlen(); tamanho da string
 strcmp() // Compara��o entre strings
*/
