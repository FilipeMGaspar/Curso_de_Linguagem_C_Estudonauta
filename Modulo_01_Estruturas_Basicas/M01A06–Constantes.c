#include <stdio.h>
#include <locale.h>
#define MOEDAEUR "EURO" //Constante na diretivas de préprocessamento

void main(){
    setlocale(LC_ALL,"Portuguese");

    int total = 8; //variavel
    const int IDADEVOTAR = 18; //Constante

    printf("Variavel total = %d",total);
    total = 10;
    printf("\nVariavel Total = %d", total);

    printf("\n\n");
    printf("A idade para votar %d anos", IDADEVOTAR);

    printf("\n\n");
    printf("Dinheiro na Europa = %s",MOEDAEUR);
    printf("\n");
}
