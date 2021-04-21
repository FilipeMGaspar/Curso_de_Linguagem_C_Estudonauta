#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int a = 15, b =5;
    int n;
    n = a & b;
    printf("%d & %d = %d\n", a, b, n);

    printf("\n");

    a = 27;
    b = 17;
    n = a | b;
    printf("%d | %d = %d\n", a, b, n);


    printf("\n");
    a = 15;
    b = 7;
    n = a ^ b;
    printf("%d ^ %d = %d\n", a, b, n);
}
