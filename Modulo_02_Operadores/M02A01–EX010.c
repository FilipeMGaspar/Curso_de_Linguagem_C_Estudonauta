#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    char nome_prod[20];
    float preco;
    float desconto, preco_final;

    printf("<<< EX010 -  Preço do Produto>>> \n\n");
    printf("Produto: ");
    gets(nome_prod);
    printf("Preço de %s: R$ ", nome_prod);
    scanf("%f", &preco);
    printf("Desconto: (%%) ");
    scanf("%f",&desconto);
    preco_final = preco - (preco * desconto / 100);
    printf("O produto %s custava R$ %.2f, mas com %.2f%% de desconto, passa a custar R$ %.2f. \n", nome_prod, preco, desconto, preco_final);
}

/*<<< EX010 -  Preço do Produto>>>

    Produto: Iphone
    Preço de Iphone: R$ 7500
    Desconto: (%) 12
    O produto iPhone custava R$ 7500, mas com 12,00% de desconto, passa a custar R$ 6600,00.

*/
