#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    //Captura do ano atual
    time_t t;
    time(&t);
    struct tm *data;// tm nome do struct data ponteiro para tm
    data = localtime(&t);
    int ano atual = data->tm_year + 1900;//Ano atual que inicial em 1900

    int anoNascimento, idade;

    printf("Indique o seu ano de nascimento: ");
    fflush(stdin);
    scanf("%d",&anoNascimento);
}

/*
4. Salve vidas dê sangue
Para doar sangue é necessário ter entre 18 e 67 anos.
Faça um aplicativo na linguagem C
Que pergunte a idade de uma pessoa
diga se ela pode doar sangue ou não.
Use alguns dos operadores lógicos OU (||) e E (&&).
*/
