#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int num;

    printf("<<< EX007 - Dobro e Terça parte >>> \n\n");
    printf("Digite um número: ");
    scanf("%d", &num);
    printf("Analisando o número %d, seu dobro é %d e sua terça parte é %d.", num, (num*2), (num/3));
}

/* <<< EX007 - Dobro e Terça parte >>>

    Digite um número: 9

     Analisando o número 9, seu dobro é 18 e sua terça parte é 3.
*/
