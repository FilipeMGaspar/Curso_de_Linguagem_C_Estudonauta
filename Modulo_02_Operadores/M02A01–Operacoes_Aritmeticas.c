#include <stdio.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL,"Portuguese");

    char l = 'J';
    printf("Estou com a letra %d na memoria \n",l);
    printf("\n\n");

    float preco = 1000;
    float desc = (preco * 10 /100);
    printf("Preco Original: %.2f \n", preco);
    printf("O valor do desconto e: %.2f \n", desc);
    printf("Preco final: %.2f \n", (preco-desc));

    printf("\n\n");
    float n1 = 5.5;
    float n2 = 8.5;
    float m = (n1+ n2) /2;
    printf("A media e de %.2f", m);

    printf("\n\n");
    int a = 3;
    int b = 2;
    int r = a % b;
    printf("O resultado e %d \n", r);
}

/*Operadores Aritméticos

+   Soma
-   Subtração
*   Multiplicação
/   Divisão
%   Resto da divisão inteiro

*/

/*Ordem de precedencia

  ()
    + - //Unário
  * / %
  + - //Forma binário

*/
