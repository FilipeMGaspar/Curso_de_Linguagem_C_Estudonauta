#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portoguese");
    char nome_prod[20];
    float preco;
    float desconto;

    printf("<<< EX010 -  Pre�o do Produto>>> \n\n");
    printf("Produto: ");
    gets(nome_prod);
    printf("Pre�o do %s: R$ ", nome_prod);
}

/*<<< EX010 -  Pre�o do Produto>>>

    Produto: Iphone
    Pre�o de Iphone: R$ 7500
    Desconto: (%) 12
    O produto iPhone custava R$ 7500, mas com 12,00% de desconto, passa a custar R$ 6600,00.

*/
