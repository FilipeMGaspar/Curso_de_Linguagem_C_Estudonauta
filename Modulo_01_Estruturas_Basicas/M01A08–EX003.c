#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[];

    printf("Qual � o seu nome? ");
    gets(nome);
    printf("Muito prazer, %s\n",nome)

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
