#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    unsigned int idade = 33;
    float peso = 85.9;
    char sexo = 'M';
    char nome[] = "Juvenal";

    printf("%s � do sexo %c tem %i anos e pesa %.2fKg \n",nome, sexo, idade, peso);
}

/*
Regras de nomes variaveis

    Come�a com uma letra
    Casesensitive
    s� usa letras, n�meros e sublinhado
    Nada de acentos
    N�o pode conter espa�os
    N�o pode ter simbulo
    N�o pode ser uma palavra reservada
*/
