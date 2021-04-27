#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    float valor_compras;

    printf("<<< EX016 - Consumidor ganha desconto >>> \n\n");
    printf("Qual foi o valor total das compras? R$ ");
    fflush(stdin);
    scanf("%f", &valor_compras);
    printf("---------------------------------------------- \n");
    printf("Voc� comprou R$ %.2f na nossa loja. \n");
    if(valor_compras > 500){
        printf("===== ATEN��O ===== \n");
        printf("Por fazer mais de R$ 500 em compras, voc� vai receber R$ %.2f de desconto \n", (valor_compras*10/100));
        printf();

    }
    printf("Muito obrigado! Volte sempre! \n");
    printf("---------------------------------------------- \n");
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
