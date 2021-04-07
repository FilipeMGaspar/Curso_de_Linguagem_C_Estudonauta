#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    unsigned int idade = 33;
    float peso = 85.9;
    char sexo = 'M';
    char nome[] = "Juvenal";

    printf("%s é do sexo %c tem %i anos e pesa %.2fKg \n",nome, sexo, idade, peso);
}

/*
Regras de nomes variaveis

    Começa com uma letra
    Casesensitive
    só usa letras, números e sublinhado
    Nada de acentos
    Não pode conter espaços
    Não pode ter simbulo
    Não pode ser uma palavra reservada
*/
