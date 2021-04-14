#include <stdio.h>
#include <locale.h>

void main(){
 setlocale(LC_ALL, "Portuguese");;

    int n;
    printf("Digite um número: ");
    scanf("%d", &n);

    float t = n/3;

    printf("a terca parte de %d e igual a %.2f", n, t);
}
