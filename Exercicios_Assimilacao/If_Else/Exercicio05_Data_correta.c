#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int diaAniv, mesAniv, anoAniv;
    int diasMes;
    int anoValido, diaValido, mesValido;

    //Captura da data do sistema
    time_t t;
    time(&t);
    struct tm *data;// tm nome do struct data ponteiro para tm
    data = localtime(&t);
    int dia = data->tm_mday;
    int mes = data->tm_mon +1;;
    int ano = data->tm_year + 1900;

    printf("\tData Atual: %d - %d - %d \n\n",dia, mes, ano);
    printf("Indique o Dia [1 - 31] em que nasceu: ");
    fflush(stdin);
    scanf("%d",&diaAniv);
    printf("Indique o Mês [1 - 12] em que nasceu: ");
    fflush(stdin);
    scanf("%d", &mesAniv);
    printf("Indique o Ano [%d - %d] em que nasceu: ", (ano -120) ,ano);
    fflush(stdin);
    scanf("%d",&anoAniv);

    printf("\nA data %d/%d/%d \n", diaAniv, mesAniv, anoAniv);
    if(anoAniv < (ano - 120)){
        printf("\n  ..: [ ERRO A0365] Ano Inválido! \n");
        printf("     ..: É Muito pouco provavel que você tenha \"%d\" anos\n",(ano - anoAniv));
        //printf(" Por favor indique um ano entre %d e %d \n", (ano -120), ano);
    }else if(anoAniv > ano){
        printf("\n  ..: [ ERRO A0365] Ano Inválido! \n");
        printf("     ..: Para o ano de %d ainda faltam \"%d\" anos \n", anoAniv, (anoAniv - ano));
        //printf(" ** Por favor indique um ano entre %d e %d \n", (ano -120), ano);
    }else{
        anoValido = 1;
    }

    switch (mesAniv){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            diasMes = 31;
            mesValido = 1;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            diasMes = 31;
            mesValido = 1;
            break;
        case 2:
            if (anoValido == 1){
                if(anoAniv % 4 == 0){
                    diasMes = 29;
                    mesValido = 1;
                }else{
                    diasMes = 28;
                    mesValido = 1;
                }
            }else{
                diasMes = 31;
            }
            break;
        default:
            printf("\n  ..: [ ERRO M012] Mês Desconhecido! \n");
            printf("     ..: O mês \" %d \" não existe!\n", mesAniv );
            //printf(" ** Por favor indique entre 1 e 12");
            diasMes = 31;
            break;
    }

    if(diaAniv < 1 || diaAniv > diasMes){
        printf("\n  ..: [ ERRO D031] Dia Inexistente! \n");
        printf("     ..: O dia \" %d \" não é válido!\n", diaAniv );
        //printf(" ** O mês inicia sempre a dia 1 e tem no máximo %d dias! \n", diasMes);
    }else{
        diaValido = 1;
    }

    if(anoValido == 1 && mesValido == 1 && diaValido == 1){
        printf("\n ..: A data apresentada é VÁLIDA! :.. \n");
    }
}




/*
5. Data Correcta
Escreva um programa
Pergunte o dia, mês e ano do aniversário de uma pessoa
diga se a data é válida ou não.
Caso não seja, diga o motivo.
Suponha que todos os meses tem 31 dias e que estejamos no ano de 2013.
*/
