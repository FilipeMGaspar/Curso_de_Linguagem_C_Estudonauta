#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int num;
    printf("Digite um n�mero: ");
    scanf("%d", &num);
}
/* <<< EX006 - Antecessor e Sucessor >>>

    Digite um n�mero: 7

    Analisando o n�mero 7, seu antecessor � 6 e seu sucessor � 8.
*/
