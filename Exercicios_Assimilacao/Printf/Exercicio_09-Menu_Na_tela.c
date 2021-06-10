#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    printf("\t ----------------------------------- \n");
    printf("\t |\tCadastro de Clientes\t   |\n");
    printf("\t ----------------------------------- \n");
    printf("\t\t 0 - Fim \n");
    printf("\t\t 1 - Incluir \n");
    printf("\t\t 2 - Alterar \n");
    printf("\t\t 3 - Excluir \n");
    printf("\t\t 4 - Consultar \n");
    printf("\n\t\tOpção ..: \n");
}

/*
9. Menu -
Elabore um programa que mostre o seguinte menu na tela:

Cadastro de Clientes
0 - Fim
1 - Inclui
2 - Altera
3 - Exclui
4 - Consulta
Opção:
*/
