#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;

    printf("Digite um n�mero: ");
    scanf("%d", &n1);
    printf("Digite outro n�mero: ");
    scanf("%d", &n2);

    int maior = (n1 > n2) ? n1 : n2;
    printf("Entre %d e %d, o maior foi %d \n", n1, n2, maior);
}
