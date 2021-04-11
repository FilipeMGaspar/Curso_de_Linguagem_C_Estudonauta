#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));//Utiliza o rel�gio do sistema para gerar n�mero aleat�rios

    int gerado = rand() % 5 + 1;//Gera entre 0 e 5
    int palpite;

    printf("<<< EX005 - Ser� que voc� acerta? >>> \n\n");

    printf("Vou pensar num n�mero entre 1 e 5. \n");
    printf("Tente adivinhar! \n\n");

    printf("Qual � o seu palpite? ");
    fflush(stdin); //Limpa o buffer do teclado
    scanf("%d", &palpite);

    printf("\n");
    printf("Eu pensei no n�mero %d o seu palpite foi o n�mero %d.\n", gerado, palpite);
}

/* <<< EX005 - Ser� que voc� acerta? >>>

    Vou pensar num n�mero entre 1 e 5.
    Tente adivinhar!
    Qual � o seu pa�pite? 2
    Eu pensei no n�mero 3 o seu palpite foi o n�mero 2.
*/
