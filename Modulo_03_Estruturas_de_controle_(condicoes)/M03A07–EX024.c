#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int num1, num2;

    printf("<<< EX024 - Ordem em dois n�meros >>> \n\n");
    printf("Me diga dois n�meros e eu colocarei \n");
    printf("os dois em ordem crescente. \n\n");

    printf("Primeiro n�mero: ");
    fflush(stdin);
    scanf("%d",&num1);
    printf("Segundo n�mero: ");
    fflush(stdin);
    scanf("%d",&num2);

    printf("\nOs n�meros em ordem s�o ");
    if(num1 < num2){
        printf("%d e %d \n",num1, num2);
    }else if( num2 < num1){
        printf("%d e %d \n", num2, num2);
    }
}

/*
 <<< EX024 - Ordem em dois n�meros >>>

 Me diga dois n�meros e eu colocarei
 os dois em ordem crescente.

 Primeiro n�mero: 9

 Segundo n�mero: 4

 Os n�meros em ordem s�o 4 e 9.

*/
