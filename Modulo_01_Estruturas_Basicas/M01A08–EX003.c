#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[30];
    int idade;

    printf("Qual � o seu nome? ");
    gets(nome);
    printf("Quantos anos voc� tem? ");
    scanf("%d", &idade);

    printf("Muito prazer, %s\n", nome);
    printf("Voc� tem %d anos e pesa", idade);
}

/* <<< EX003 - Dados >>>

Qual � o seu nome? Gustavo Guanabara
Quantos anos voc� tem? 39
Qual � o seu peso? (kg) 97,2

--------<<< PROCESSANDO >>>--------
Muito prazer, Gustavo Guanabara.
Voc� tem 39 anos e pesa 97.00Kg correcto?
FIM.
*/
