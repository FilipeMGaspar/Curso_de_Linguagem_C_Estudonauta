#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    printf("Oi, Tudo Bem! \n");
    printf("O %s tem %i anos\n","Gustavo",39);
    printf("O seu peso atual �: %.2fKg \n" , 97.5);
    printf("O seu sexo �: %C \n",'m');
}

/*
%i  int
%f  float ou double
%c  Char
%s  string
*/

/*
%e nota��o
%hd short int
%ld long int
%hu unsigned short
%u unsigned
%lu unsigned long
*/
