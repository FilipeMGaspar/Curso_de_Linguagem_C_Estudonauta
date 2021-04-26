#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    float vel;

    printf("Digite a velocidade do carro: ");
    fflush(stdin);
    scanf("%f",&vel);

    if(vel  > 80){
        printf("Velocidade: %.2f \n", vel);
        printf("Você foi multado! Pague R$ 100 \n");
    }
    printf("\nDirija com cuidado! \n");
    printf("\nSe beber não dirija!\n");
}
