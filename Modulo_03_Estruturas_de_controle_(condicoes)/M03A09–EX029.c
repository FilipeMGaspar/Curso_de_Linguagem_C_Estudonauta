#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    float peso;

    printf("<<< EX029 - Seu peso nos planetas v1.0 >>> \n\n");
    printf("Seu peso na Terra (kg): ");
    fflush(stdin);
    scanf("%f", &peso);
    printf("\n");
    printf("\t ESCOLHA UM PLANETA\n");
    printf("\t====================\n");
    printf("\t 1 \t Merc�rio \n");
    printf("\t 2 \t V�nus \n");


}

/*
<<< EX029 - Seu peso nos planetas v1.0 >>>

    Seu peso na Terra(Kg) = 91


        ESCOLHA UM PLANETA
        ===================
        1   Merc�rio
        2   V�nus
        3   Marte
        4   J�piter
        5   Saturno
        6   Urano
        ===================
        Digite a sua op��o => 4

        ----------------------------------
        No planeta J�PITER, seu peso seria 240.24 Kg
        --------------------------------------
        VOLTE SEMPRE.


<<< EX029 - Seu peso nos planetas v1.0 >>>

    Seu peso na Terra(Kg) = 91


        ESCOLHA UM PLANETA
        ===================
        1   Merc�rio
        2   V�nus
        3   Marte
        4   J�piter
        5   Saturno
        6   Urano
        ===================
        Digite a sua op��o => 9

        ----------------------------------
        Seu peso n�o pode ser calculado para outros planetas.
        Tente Novamente.
        --------------------------------------
        VOLTE SEMPRE.
*/
