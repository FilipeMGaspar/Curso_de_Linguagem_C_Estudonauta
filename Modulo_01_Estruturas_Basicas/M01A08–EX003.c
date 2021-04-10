#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[];

    printf("Qual é o seu nome? ");
    gets(nome);
    printf("Muito prazer, %s\n",nome)

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
