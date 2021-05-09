#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int n;

    printf("Digite um número: ");
    fflush(stdin);
    scanf("%d",&n);

}
