#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int n = 25 $ 12;
    printf("O resultado foi %d \n",n);
}
