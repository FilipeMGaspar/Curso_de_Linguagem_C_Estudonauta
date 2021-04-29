#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int num;

    printf("<<< EX021 - Inverso ou oposto >>> \n\n");
    printf("Digite um número: ");
    fflush(stdin);
    scanf("%d",&num);
    if(num < 0){
        printf("O oposto de %d é %d \n", num, (num * -1));
    }else{
        float res = 1/(float)num;
        printf("o inverso de %d é igual a %.4f \n",num, res);
    }
}

/*
<<< EX021 - Inverso ou oposto >>>

Digite um número: 4

O inverso de 4 é igual a 0,2500


Digite um número: -8
O oposto de -8 é igual a 8

*/
