#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese"); //Define a lingua para Portugês
    char p_nome[30], s_nome[30];
    char p_sexo. s_sexo;
    float p_nota, s_nota;


    printf("Cadastrando a primeira pessoa:\n");
    printf("------------------------------------- \n");
    printf("NOME: ");
    fflush(stdin); //Limpa o buffer do teclado
    gets(p_nome);
    printf("SEXO [M/F]: ");
    fflush(stdin); //Limpa o buffer do teclado
    p_sexo = getchar();
    printf("NOTA: ");
    fflush(stdin); //Limpa o buffer do teclado
    scanf("%f", p_nota);

    printf("Cadastrando a segunda pessoa:\n");
    printf("------------------------------------- \n");
    printf("NOME: ");
    fflush(stdin); //Limpa o buffer do teclado
    gets(s_nome);
    printf("SEXO [M/F]: ");
    fflush(stdin); //Limpa o buffer do teclado
    s_sexo = getchar();
    printf("NOTA: ");
    fflush(stdin); //Limpa o buffer do teclado
    scanf("%f", s_nota);

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
