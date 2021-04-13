#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int num;

    printf("<<< EX006 - Antecessor e Sucessor >>> \n\n");
    printf("Digite um número: ");
    scanf("%d", &num);

    printf("\n");
    printf("Analisando o número %d, ",num);
    printf("o seu antecessor é %d ",(num-1));
    printf("e seu sucessor é %d \n", (num+1));
}
/* <<< EX006 - Antecessor e Sucessor >>>

    Digite um número: 7

    Analisando o número 7, seu antecessor é 6 e seu sucessor é 8.
*/
