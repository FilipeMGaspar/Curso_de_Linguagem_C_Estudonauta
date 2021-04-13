#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    printf("\n");
    printf("Analisando o número %d \n",num);
    printf("Anterior: %d \n",(num-1));
    printf("Seguinte: %d \n", (num+1));
}
/* <<< EX006 - Antecessor e Sucessor >>>

    Digite um número: 7

    Analisando o número 7, seu antecessor é 6 e seu sucessor é 8.
*/
