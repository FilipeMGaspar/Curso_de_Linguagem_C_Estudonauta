#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int n1, n2;

    printf("Digite um número: ");
    fflush(stdin);
    scanf("%d",&n1);
    printf("Digite outro número: ");
    fflush(stdin);
    scanf("%d",&n2);

    if(n1 > n2){
        printf("\nO maior valor é o primeiro: %d \n", n1);
    }else {
        if(n1 < n2){
            printf("\nO maior valor é o segundo:  %d \n", n2);
        }else{
           printf("\nO %d é IGUAL a %d \n", n1, n2);
        }
    }
}
