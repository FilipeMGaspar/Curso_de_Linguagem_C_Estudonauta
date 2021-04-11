#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));//Utiliza o relógio do sistema para gerar número aleatórios

    int gerado = rand() % 5 + 1;//Gera entre 0 e 5
    int palpite;

    printf("<<< EX005 - Será que vocè acerta? >>> \n\n");

    printf("Vou pensar num número entre 1 e 5. \n");
    printf("Tente adivinhar! \n\n");

    printf("Qual é o seu palpite? ");
    fflush(stdin); //Limpa o buffer do teclado
    scanf("%d", &palpite);

    printf("\n");
    printf("Eu pensei no número %d o seu palpite foi o número %d.\n", gerado, palpite);
}

/* <<< EX005 - Será que vocè acerta? >>>

    Vou pensar num número entre 1 e 5.
    Tente adivinhar!
    Qual é o seu paçpite? 2
    Eu pensei no número 3 o seu palpite foi o número 2.
*/
