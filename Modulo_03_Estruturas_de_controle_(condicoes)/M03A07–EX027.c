#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("<<< EX027 -  Tr�s valores em ordem >>> \n\n");
    int num1, num2, num3;

    printf("Primeiro n�mero: ");
    fflush(stdin);
    scanf("%d", &num1);
    printf("Segundo n�mero: ");
    fflush(stdin);
    scanf("%d", &num2);
    printf("Terceiro n�mero: ");
    fflush(stdin);
    scanf("%d", &num3);

    printf("\n------------------------\n");
    if(num1 > num2 && num2 > num3){
        printf("MAIOR: %d \n", num1);       // num1 � o maior
        printf("INTERM�DIO: %d \n", num2);  // num2 � o interm�dio
        printf("MENOR: %d \n", num3);       // num3 � o menor
    }else if(num2 > num1 && num1 > num3){
        printf("MAIOR: %d \n", num2);       // num2 � o maior
        printf("INTERM�DIO: %d \n", num1);  // num1 � o interm�dio
        printf("MENOR: %d \n", num3);       // num3 � o menor
    }else if(num3 > num2 && num2 > num1){
        printf("MAIOR: %d \n", num3);       // num3 � o maior
        printf("INTERM�DIO: %d \n", num2);  // num2 o interm�dio
        printf("MENOR: %d \n", num1);       // num1 � o menor
    }
    printf("------------------------\n");


    /*if(num1 > num2 && num2 > num3){
        printf("MAIOR: %d \n", num1);
        printf("INTERM�DIO: %d \n", num2);
        printf("MENOR: %d \n", num3);
    }else if(num2 > num1 && num1 > num3){
        printf("MAIOR: %d \n", num2);
        printf("INTERM�DIO: %d \n", num1);
        printf("MENOR: %d \n", num3);
    }else if(num3 > num1 && num2 > num1){
        printf("MAIOR: %d \n", num3);//2
        printf("INTERM�DIO: %d \n", num2);//3
        printf("MENOR: %d \n", num1);//1
    }else{
        printf("MAIOR: %d \n", num1);
        printf("INTERM�DIO: %d \n", num3);
        printf("MENOR: %d \n",num2);
    }*/

}

/*
<<< EX027 -  Tr�s valores em ordem >>>

Me diga tr�s n�meros e eu colocarei
eles em ordem para voc�.

Primeiro n�mero: 2
Segundo n�mero: 7
Terceiro n�mero: 1

---------------------
MAIOR: 7
INTERMEDI�RIO: 2
MENOR: 1



*/
