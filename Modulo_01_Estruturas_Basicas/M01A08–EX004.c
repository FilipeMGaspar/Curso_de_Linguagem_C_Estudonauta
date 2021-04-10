#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese"); //Define a lingua para Portugês
    char nome[30];
    char sexo;
    float nota;


    printf("Cadastrando a primeira pessoa:\n");
    printf("------------------------------------- \n");
    printf("NOME: ");
    gets(nome);
    printf("SEXO [M/F]: ")
    sexo = getchar();

}

/* <<< EX004 - Listagem >>>

 Cadastrando a primeira pessoa:
 -------------------------------------
 NOME: Gustavo
 SEXO [M/F]: M
 NOTA: 4,5

  Cadastrando a segunda pessoa:
 -------------------------------------
 NOME: Maria da Silva
 SEXO [M/F]: F
 NOTA: 9,5

   Cadastrando a terceira pessoa:
 -------------------------------------
 NOME: Claudio Peçanha
 SEXO [M/F]: M
 NOTA: 10

 ===============================
 Listagem Completa
 --------------------------------
 NOME               SEXO    NOTA
 Gustavo             M       4,5
 Maria da Silva      F       9.5
 Claudio Peçamha     M       10.0
 ---------------------------------
*/
