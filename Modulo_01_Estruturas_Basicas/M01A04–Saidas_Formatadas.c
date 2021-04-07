#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    printf("Oi, Tudo Bem! \n");
    printf("O %s tem %i anos\n","Gustavo",39);
    printf("O seu peso atual é: %.2fKg \n" , 97.5);
}

/*
%i  int
%f  float ou double
%c  Char
%s  string
*/
