#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int num;

    printf("<<< EX007 - Dobro e Ter�a parte >>> \n\n");
    printf("Digite um n�mero: ");
    scanf("%d", &num);
    printf("Analisando o n�mero %d, seu dobro � %d e sua ter�a parte � %d.", num, (num*2), (num/3));
}

/* <<< EX007 - Dobro e Ter�a parte >>>

    Digite um n�mero: 9

     Analisando o n�mero 9, seu dobro � 18 e sua ter�a parte � 3.
*/
