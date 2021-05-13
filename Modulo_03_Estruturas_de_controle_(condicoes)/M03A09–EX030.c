#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    float preco;
    int op;

    printf("<<< EX030 - Preço por Época >>> \n\n");
    printf("Digite o preço de um produto R$ ");
    fflush(stdin);
    scanf("%f", &preco);

    printf("\n");
    printf("\t ESCOLHA UM PERÍODO \n");
    printf("\t==================== \n");
    printf("\t 1\t Carnaval [ +20%% ] \n");
    printf("\t 2\t Férias Escolares [ +5%% ] \n");
    printf("\t 3\t Black Fryday [ -30%% ] \n");
    printf("\t 4\t Natal [ -5%% ] \n");
    printf("\t==================== \n");
    printf("Digite a sua opção => ");
    fflush(stdin);
    scanf("%d", &op);

    printf("\n");
    printf("------------------------------------------------------------------------ \n");
    switch(op){
        case 1:
            printf("Na época de Carnaval, o preço do produdo vai para R$ %.2f \n",(preco + (preco * 20/100)));
            break;
        case 2:
             printf("Na época de Férias Escolares, o preço do produdo vai para R$ %.2f \n",(preco + (preco * 5/100)));
            break;
        case 3:
            printf("Na época de Black Fryday, o preço do produdo vai para R$ %.2f \n",(preco - (preco * 30/100)));
            break;
        case 4:
            printf("Na época de Black Natal, o preço do produdo vai para R$ %.2f \n",(preco - (preco * 5/100)));
            break;
        default:
            printf("Em épocas assim, Mantenha o preço do produdo em R$ %.2f \n", preco);
            break;
    }
    printf("------------------------------------------------------------------------ \n");
}

/*
<<< EX030 - Preço por Época >>>

Digite o preço de um produto R$ 500

    ESCOLHA UMPERÍODO
    ===================
    1   Carnaval [+10%]
    2   Férias Escolares [+20%]
    3   Dia das Crianças [+5%]
    4   Black Fryday [-30%]
    5   Natal [-5%]
    =====================
    Digite a sua opção => 2

    -----------------------------------------
    Na época de Férias Escolares, o preço do produdo vai para R$ 600,00.
    ------------------------------------------------
    VOLTE SEMPRE!



    <<< EX030 - Preço por Época >>>

Digite o preço de um produto R$ 500

    ESCOLHA UMPERÍODO
    ===================
    1   Carnaval [+10%]
    2   Férias Escolares [+20%]
    3   Dia das Crianças [+5%]
    4   Black Fryday [-30%]
    5   Natal [-5%]
    =====================
    Digite a sua opção => 9

    -----------------------------------------
    Em épocas assim, Mantenha o preço do produdo em R$ 500,00.
    ------------------------------------------------
    VOLTE SEMPRE!
*/
