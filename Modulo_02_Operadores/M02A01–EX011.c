#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("<<< EX011 - Par ou �mpar >>> \n\n");
    printf("Digite um n�mero qualquer: ");
    scanf("%d", &num);

}
/*
<<< EX011 - Par ou �mpar >>>
Digite um n�mero qualquer: 7
O n�mero que voc� digitou � �MPAR!
*/
