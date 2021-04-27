#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
}

/*
<<< EX016 - Consumidor ganha desconto >>>

Qual foi o valor total das compras? R$ 250

--------------------------------------
você comprou R$ 250,00 na nossa loja.
Volte Sempre!
--------------------------------------

Se valor de compras for maior ou igual a 500 dá é 10%

--------------------------------------
você comprou R$ 800,00 na nossa loja.

======= ATENÇÃO =======
Por fazer mais de R$ 500 em compras, você vai receber R$ 80,00 de desconto
O valor a ser pago é R$ 720!
Volte Sempre!
--------------------------------------
*/
