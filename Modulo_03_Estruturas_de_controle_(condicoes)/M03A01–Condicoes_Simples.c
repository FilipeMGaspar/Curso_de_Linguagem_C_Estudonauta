#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    float vel;

    printf("Digite a velocidade do carro: ");
    fflush(stdin);
    scnaf("%f",&vel);

    if(vel  > 80){
        printf("Multado! Pague R$ 100 \n");
    }
    printf("Dirija com cuidado! \n");
}
