#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int a = 15, b =5;
    int n = a & b;
    printf("%d & %d = %d\n", a, b, n);
}
