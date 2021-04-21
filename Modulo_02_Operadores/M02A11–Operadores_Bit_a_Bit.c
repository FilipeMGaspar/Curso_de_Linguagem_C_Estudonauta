#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int n = 25 ^ 12;
    printf("O resultado foi %d \n",n);
}
// int n = 25 & 12;  dá como resultado 8


//    int n = 25 | 12; dá como resultado 29


//  int n = 25 ^ 12;  dá como resultado 21
