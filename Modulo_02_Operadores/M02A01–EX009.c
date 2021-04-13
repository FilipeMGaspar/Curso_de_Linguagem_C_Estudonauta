#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portoguese");
    float nota1, nota2, media;
    char nome[20];

    printf("<<< EX009 -  Média do aluno>>> \n\n");
    printf("Nome do Aluno(a): ");
    fflush(stdin);//Limpa o buffer do teclado
    gets(nome);
    printf("Nota 1: ");
    fflush(stdin);//Limpa o buffer do teclado
    scanf("%f", &nota1);
    printf("Nota 2: ");
    fflush(stdin);//Limpa o buffer do teclado
    scanf("%f", &nota2);
    //Calculo da média
    media = (nota1+nota2)/2;
    printf("O aluno %s, teve %.2f e %.2f, ficou com média de %.2f \n", nome, nota1, nota2, media);
}

/* <<< EX009 -  Média do aluno>>>

    Nome do Aluno: Gustavo
    Nota 1: 4,5
    Nota 2: 8
    O aluno gustavo tirou notas 4,5 e 8, ficou com média de 6,3
*/
