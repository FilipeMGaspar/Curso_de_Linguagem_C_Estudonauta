#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("<<< EX027 -  Três valores em ordem >>> \n\n");
    int num1, num2, num3;

    printf("Primeiro número: ");
    fflush(stdin);
    scanf("%d", &num1);
    printf("Segundo número: ");
    fflush(stdin);
    scanf("%d", &num2);
    printf("Terceiro número: ");
    fflush(stdin);
    scanf("%d", &num3);

    printf("\n------------------------\n");
    if(num1 > num2 && num2 > num3){
        printf("MAIOR: %d \n", num1);       // num1 é o maior
        printf("INTERMÉDIO: %d \n", num2);  // num2 é o intermédio
        printf("MENOR: %d \n", num3);       // num3 é o menor
    }else if(num2 > num1 && num1 > num3){
        printf("MAIOR: %d \n", num2);       // num2 é o maior
        printf("INTERMÉDIO: %d \n", num1);  // num1 é o intermédio
        printf("MENOR: %d \n", num3);       // num3 é o menor
    }else if(num3 > num2 && num2 > num1){
        printf("MAIOR: %d \n", num3);       // num3 é o maior
        printf("INTERMÉDIO: %d \n", num2);  // num2 o intermédio
        printf("MENOR: %d \n", num1);       // num1 é o menor
    }
    printf("------------------------\n");


    /*if(num1 > num2 && num2 > num3){
        printf("MAIOR: %d \n", num1);
        printf("INTERMÉDIO: %d \n", num2);
        printf("MENOR: %d \n", num3);
    }else if(num2 > num1 && num1 > num3){
        printf("MAIOR: %d \n", num2);
        printf("INTERMÉDIO: %d \n", num1);
        printf("MENOR: %d \n", num3);
    }else if(num3 > num1 && num2 > num1){
        printf("MAIOR: %d \n", num3);//2
        printf("INTERMÉDIO: %d \n", num2);//3
        printf("MENOR: %d \n", num1);//1
    }else{
        printf("MAIOR: %d \n", num1);
        printf("INTERMÉDIO: %d \n", num3);
        printf("MENOR: %d \n",num2);
    }*/

}

/*
<<< EX027 -  Três valores em ordem >>>

Me diga três números e eu colocarei
eles em ordem para você.

Primeiro número: 2
Segundo número: 7
Terceiro número: 1

---------------------
MAIOR: 7
INTERMEDIÁRIO: 2
MENOR: 1



*/
