#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portoguese");
    float nota1, nota2;
    char nome[20];

    printf("<<< EX009 -  Média do aluno>>> \n\n");
    printf("Nome do Aluno(a): ");
    fflush(stdin);//Limpa o buffer do teclado
    gets(nome);
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);

}

/* <<< EX009 -  Média do aluno>>>

    Nome do Aluno: Gustavo
    Nota 1: 4,5
    Nota 2: 8
    O aluno gustavo tirou notas 4,5 e 8, ficou com média de 6,3
*/
