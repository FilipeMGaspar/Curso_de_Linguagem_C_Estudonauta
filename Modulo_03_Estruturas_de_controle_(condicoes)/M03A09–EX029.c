#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    float peso;
    int op;

    printf("<<< EX029 - Seu peso nos planetas v1.0 >>> \n\n");
    printf("Seu peso na Terra (kg): ");
    fflush(stdin);
    scanf("%f", &peso);
    printf("\n");
    printf("\t ESCOLHA UM PLANETA\n");
    printf("\t====================\n");
    printf("\t 1 \t Mercúrio \n");
    printf("\t 2 \t Vênus \n");
    printf("\t 3 \t Terra \n");
    printf("\t 4 \t Marte \n");
    printf("\t 5 \t Júpiter \n");
    printf("\t 6 \t Saturno \n");
    printf("\t 7 \t Urano \n");
    printf("\t 8 \t Netuno \n");
    printf("\t====================\n");
    printf("\t Digite a sua Opção => ");
    fflush(stdin);
    scanf("%d", &op);

    printf("\n\n------------------------------------------------------ \n");
    switch(op){
    case 1:
        printf("No planeta MERCÚRIO, o seu peso seria de %.2f Kg \n",(peso * 0.37));
        break;
    case 2:
        printf("No planeta VÊNUS, o seu peso seria de %.2f Kg \n",(peso * 0.88));
        break;
    case 3:
        printf("No planeta TERRA, o seu é de %.2f Kg \n", peso);
        break;
    case 4:
        printf("No planeta MARTE, o seu peso seria de %.2f Kg \n",(peso * 0.38));
        break;
    case 5:
        printf("No planeta JÚPITER, o seu peso seria de %.2f Kg \n",(peso * 2.64));
        break;
    case 6:
        printf("No planeta SATURNO, o seu peso seria de %.2f Kg \n",(peso * 1.15));
        break;
    case 7:
        break;
    case 8:
        break;
    default:
        printf("Seu peso não pode ser calculado para outros planetas.\n");
        printf("Tente Novamente. \n");
        break;
    }
    printf("------------------------------------------------------ \n");
    printf("VOLTE SEMPRE! \n");
}

/*
<<< EX029 - Seu peso nos planetas v1.0 >>>

    Seu peso na Terra(Kg) = 91


        ESCOLHA UM PLANETA
        ===================
        1   Mercúrio
        2   Vênus
        3   Marte
        4   Júpiter
        5   Saturno
        6   Urano
        ===================
        Digite a sua opção => 4

        ----------------------------------
        No planeta JÚPITER, seu peso seria 240.24 Kg
        --------------------------------------
        VOLTE SEMPRE.


<<< EX029 - Seu peso nos planetas v1.0 >>>

    Seu peso na Terra(Kg) = 91


        ESCOLHA UM PLANETA
        ===================
        1   Mercúrio
        2   Vênus
        3   Marte
        4   Júpiter
        5   Saturno
        6   Urano
        ===================
        Digite a sua opção => 9

        ----------------------------------
        Seu peso não pode ser calculado para outros planetas.
        Tente Novamente.
        --------------------------------------
        VOLTE SEMPRE.
*/
