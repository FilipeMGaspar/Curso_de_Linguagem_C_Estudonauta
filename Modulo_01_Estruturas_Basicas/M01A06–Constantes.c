#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int total = 8; //variavel
    const int IDADEVOTAR = 18; //Constante

    printf("%d",total);
    total = 10;
    printf("\n%d", total);

    printf("\n\n");
    printf("A idade para votar %d anos", IDADEVOTAR);
}
