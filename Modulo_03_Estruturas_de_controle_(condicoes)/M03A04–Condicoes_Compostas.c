#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int n;
    printf("Digite um n�mero: ");
    fflush(stdin);
    scanf("%d",&n);
    if(n % 2 == 0){
        printf("\n O n�mero %d � PAR! \n", n);
    }else{
        printf("\n O n�mero %d � �MPAR! \n", n);
    }
    printf("\n ..: TERMINOU :.. \n");
}
