#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int num1, num2;

    printf("<<< EX024 - Ordem em dois números >>> \n\n");
    printf("Me diga dois números e eu colocarei \n");
    printf("os dois em ordem crescente. \n\n");

    printf("Primeiro número: ");
    fflush(stdin);
    scanf("%d",&num1);
    printf("Segundo número: ");
    fflush(stdin);
    scanf("%d",&num2);

    printf("\nOs números em ordem são ");
    if(num1 < num2){
        printf("%d e %d \n",num1, num2);
    }else if( num2 < num1){
        printf("%d e %d \n", num2, num2);
    }
}

/*
 <<< EX024 - Ordem em dois números >>>

 Me diga dois números e eu colocarei
 os dois em ordem crescente.

 Primeiro número: 9

 Segundo número: 4

 Os números em ordem são 4 e 9.

*/
