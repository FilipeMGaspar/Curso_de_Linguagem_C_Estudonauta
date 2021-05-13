#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    float preco;
    int op;

    printf("<<< EX030 - Pre�o por �poca >>> \n\n");
    printf("Digite o pre�o de um produto R$ ");
    fflush(stdin);
    scanf("%f", &preco);

    printf("\n");
    printf("\t ESCOLHA UM PER�ODO \n");
    printf("\t==================== \n");
    printf("\t 1\t Carnaval [ +20%% ] \n");
    printf("\t 2\t F�rias Escolares [ +5%% ] \n");
    printf("\t 3\t Black Fryday [ -30%% ] \n");
    printf("\t 4\t Natal [ -5%% ] \n");
    printf("\t==================== \n");
    printf("Digite a sua op��o => ");
    fflush(stdin);
    scanf("%d", &op);

    printf("\n");
    printf("------------------------------------------------------------------------ \n");
    switch(op){
        case 1:
            printf("Na �poca de Carnaval, o pre�o do produdo vai para R$ %.2f \n",(preco + (preco * 20/100)));
            break;
        case 2:
             printf("Na �poca de F�rias Escolares, o pre�o do produdo vai para R$ %.2f \n",(preco + (preco * 5/100)));
            break;
        case 3:
            printf("Na �poca de Black Fryday, o pre�o do produdo vai para R$ %.2f \n",(preco - (preco * 30/100)));
            break;
        case 4:
            printf("Na �poca de Black Natal, o pre�o do produdo vai para R$ %.2f \n",(preco - (preco * 5/100)));
            break;
        default:
            printf("Em �pocas assim, Mantenha o pre�o do produdo em R$ %.2f \n", preco);
            break;
    }
    printf("------------------------------------------------------------------------ \n");
}

/*
<<< EX030 - Pre�o por �poca >>>

Digite o pre�o de um produto R$ 500

    ESCOLHA UMPER�ODO
    ===================
    1   Carnaval [+10%]
    2   F�rias Escolares [+20%]
    3   Dia das Crian�as [+5%]
    4   Black Fryday [-30%]
    5   Natal [-5%]
    =====================
    Digite a sua op��o => 2

    -----------------------------------------
    Na �poca de F�rias Escolares, o pre�o do produdo vai para R$ 600,00.
    ------------------------------------------------
    VOLTE SEMPRE!



    <<< EX030 - Pre�o por �poca >>>

Digite o pre�o de um produto R$ 500

    ESCOLHA UMPER�ODO
    ===================
    1   Carnaval [+10%]
    2   F�rias Escolares [+20%]
    3   Dia das Crian�as [+5%]
    4   Black Fryday [-30%]
    5   Natal [-5%]
    =====================
    Digite a sua op��o => 9

    -----------------------------------------
    Em �pocas assim, Mantenha o pre�o do produdo em R$ 500,00.
    ------------------------------------------------
    VOLTE SEMPRE!
*/
