#include <stdio.h>
#include <locale.h>

void main(){
 setlocale(LC_ALL, "Portuguese");;

    int n;
    printf("Digite um n�mero: ");
    scanf("%d", &n);

    float t = (float)n/3;

    printf("a terca parte de %d e igual a %.2f \n", n, t);

    int x = 65;
    printf("\nEu tenho %c \n", (char)x);
}
