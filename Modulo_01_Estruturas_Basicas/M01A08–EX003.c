#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[30];
    int idade;
    float peso;

    printf("<<< EX003 - Dados >>> \n\n");
    printf("Qual é o seu nome? ");
    gets(nome);
    printf("Quantos anos você tem? ");
    scanf("%d", &idade);
    printf("Qual é o seu peso? (kg) ");
    scanf("%f", &peso);
    printf("Muito prazer, %s\n", nome);
    printf("Você tem %d anos e pesa %.2fKg Correcto?\n", idade ,peso);
    printf("FIM!");
}

/* <<< EX003 - Dados >>>

Qual é o seu nome? Gustavo Guanabara
Quantos anos você tem? 39
Qual é o seu peso? (kg) 97,2

--------<<< PROCESSANDO >>>--------
Muito prazer, Gustavo Guanabara.
Você tem 39 anos e pesa 97.00Kg correcto?
FIM.
*/
