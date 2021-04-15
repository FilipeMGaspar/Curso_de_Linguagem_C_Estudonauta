#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("<<< EX011 - Par ou Ímpar >>> \n\n");
    printf("Digite um número qualquer: ");
    scanf("%d", &num);
    printf("O número que você digitou é %s\n",((num%2 == 0) ? "PAR" : "ÍMPAR"));
}
/*
<<< EX011 - Par ou Ímpar >>>
Digite um número qualquer: 7
O número que você digitou é ÍMPAR!
*/
