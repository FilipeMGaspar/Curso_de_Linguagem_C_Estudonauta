#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int num;

    printf("<<< EX023 - positivo ou Negativo >>> \n\n");
    printf(" Me diga um n�mero e eu te direi se \n");
    printf("ele � POSITIVO, NEGATIVO ou NULO. \n\n");

    printf("Digite um n�mero: ");
    fflush(stdin);
    scanf("%d", &num);

    printf("\nO n�mero: %d �: ",num);
    if(num < 0){
        printf("NEGATIVO \n");
    }else if(num > 0){
        printf("POSITIVO \n");
    }else{
        printf("NULO \n");
    }
}

/*
 <<< EX023 - positivo ou Negativo >>>

 Me diga um n�mero e eu te direi se
 ele � POSITIVO, NEGATIVO ou NULO.

 Digite um n�mero
*/
