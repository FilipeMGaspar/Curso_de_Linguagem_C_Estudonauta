#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int n;

    printf("Digite um número: ");
    fflush(stdin);
    scanf("%d",&n);

    switch(n){
    case 1:
        printf("UM");
        break;
    case 2:
        printf("DOIS");
        break;
    case 3:
        printf("TRÊS")
        break;
    case 4:
        printf("QUATRO");
        break;
    default:
        printf("Outro número %d", n);
        break;
    }
}
