#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int n;
    printf("Digite um número: ");
    fflush(stdin);
    scanf("%d",&n);
    if(n % 2 == 0){
        printf("O número %d é PAR! \n", n);
    }else{
        printf("O número %d é ÍMPAR! \n", n);
    }
    printf("\n ..: TERMINOU :.. \n");
}
