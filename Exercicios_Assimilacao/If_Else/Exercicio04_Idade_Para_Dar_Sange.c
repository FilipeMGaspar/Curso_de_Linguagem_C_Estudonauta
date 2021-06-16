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
    int anoAtual = data->tm_year + 1900;//Ano atual que inicial em 1900

    int anoNascimento, idade;

    printf("Indique o seu ano de nascimento: ");
    fflush(stdin);
    scanf("%d",&anoNascimento);

    idade = anoAtual - anoNascimento;

    printf("\nVoc� tem %d anos \n", idade);
    if(idade > 18 && idade < 67){
        printf("  Pode dar Sangue!\n");
    }else{
        printf("  Ainda n�o pode dar sangue \n");
        printf(" Para dar sangue dever� ter entre 18 e 67 Anos \n");
    }
}

/*
4. Salve vidas d� sangue
Para doar sangue � necess�rio ter entre 18 e 67 anos.
Fa�a um aplicativo na linguagem C
Que pergunte a idade de uma pessoa
diga se ela pode doar sangue ou n�o.
Use alguns dos operadores l�gicos OU (||) e E (&&).
*/
