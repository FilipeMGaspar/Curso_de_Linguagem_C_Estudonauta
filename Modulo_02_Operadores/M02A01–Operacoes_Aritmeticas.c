#include <stdio.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL,"Portuguese");

    float preco = 123.35;
    float desc = (preco * 10 /100);

    printf("O valor do desconto e: %.2f \n", desc);
    printf("Preco final: %.2f \n", (preco-desc));

    /*float n1 = 5.5;
    float n2 = 8.5;

    float m = (n1+ n2) /2;
    printf("A media e de %.2f", m);
    */

   /*
    int a = 3;
    int b = 2;
    int r = a % b;

    printf("O resultado e %d", r);
    */
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
