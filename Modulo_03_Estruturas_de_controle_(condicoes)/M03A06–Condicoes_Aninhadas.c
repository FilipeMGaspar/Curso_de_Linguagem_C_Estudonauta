#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int n1, n2;

    printf("Digite um n�mero: ");
    fflush(stdin);
    scanf("%d",&n1);
    printf("Digite outro n�mero: ");
    fflush(stdin);
    scanf("%d",&n2);

    if(n1 > n2){
        printf("O maior � o %d \n", n1);
    }else {
        if(n1 < n2){
            printf("O maior � o %d \n", n2);
        }else{
           printf("%d � igual a %d \n", n1, n2);
        }
    }
}
