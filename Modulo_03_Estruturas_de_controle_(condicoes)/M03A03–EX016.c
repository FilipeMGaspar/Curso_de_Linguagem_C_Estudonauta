#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
}

/*
<<< EX016 - Consumidor ganha desconto >>>

Qual foi o valor total das compras? R$ 250

--------------------------------------
voc� comprou R$ 250,00 na nossa loja.
Volte Sempre!
--------------------------------------

Se valor de compras for maior ou igual a 500 d� � 10%

--------------------------------------
voc� comprou R$ 800,00 na nossa loja.

======= ATEN��O =======
Por fazer mais de R$ 500 em compras, voc� vai receber R$ 80,00 de desconto
O valor a ser pago � R$ 720!
Volte Sempre!
--------------------------------------
*/
