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
        printf("\nUM\n");
        break;
    case 2:
        printf("\nDOIS\n");
        break;
    case 3:
        printf("\nTR�S\n");
        break;
    case 4:
        printf("\nQUATRO\n");
        break;
    default:
        printf("\nOutro n�mero %d", n);
        break;
    }

    printf("\n ..: ACABOU :.. \n");
}
