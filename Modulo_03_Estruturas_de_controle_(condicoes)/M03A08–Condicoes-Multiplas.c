#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int n;

    printf("Digite um n�mero: ");
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
        printf("TR�S")
        break;
    case 4:
        printf("QUATRO");
        break;
    default:
        printf("Outro n�mero %d", n);
        break;
    }
}
