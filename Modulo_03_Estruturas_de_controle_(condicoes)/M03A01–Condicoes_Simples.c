#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    float vel;

    printf("Digite a velocidade do carro: ");
    fflush(stdin);
    scanf("%f",&vel);

    if(vel  > 80){
        printf("Voc� foi multado! \n");
    }
    printf("\nDirija com cuidado! \n");
    printf("Se beber n�o dirija!\n");
}
