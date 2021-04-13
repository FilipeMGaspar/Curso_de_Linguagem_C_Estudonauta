#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portoguese");
    char letra;

    printf("<<< EX008 - Alfabeto >>> \n\n");
    printf("Digite uma letra: ");
    letra = getchar();

    printf("Antes da letra %c temos a letra %c. Depois temos a letra %c \n", letra, (letra-1), (letra+1));
}

/* <<< EX008 - Alfabeto >>>
    Digite uma letra: r

    Antes da letra R temos a tera Q. depois temos a letra S.
*/
