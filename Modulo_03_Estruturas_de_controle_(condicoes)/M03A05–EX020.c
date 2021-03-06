#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    float dist;

    printf("<<< EX020 - Pre?o da Passagem >>> \n\n");
    printf("========= TABELA DE PRE?OS ========= \n");
    printf("Viagem at? 200 Km \tR$ 0.50/Km \n");
    printf("A partir de 200 km \tR$ 0.35/km \n");
    printf("------------------------------------ \n\n");

    printf("Distancia total da viagem: ");
    fflush(stdin);
    scanf("%f",&dist);
    printf("\n------------------------------------------------\n");

    if(dist < 0){ //evita valores negativos
        dist *= -1; //calculo do oposto ou valor absoluto
    }
    if(dist > 0 && dist <= 200){
        printf("Uma viagem de %.2f km vai custar R$ 0.50/km. \n",dist);
        printf("Valor total: R$ %.2f \n",(dist * 0.50));
    } else {
        printf("Uma viagem de %.2f km vai custar R$ 0.35/km. \n",dist);
        printf("Valor total: R$ %.2f \n",(dist * 0.35));
    }

    printf("------------------------------------------------\n");
}

/*
<<< EX020 - Pre?o da Passagem >>>

======= TABELA DE PRE?OS =======
Viagem at? 200 Km   R$ 0.50/Km
A partir de 200 Km   R$ 0.35/Km
-----------------------------------

Dist?ncia total da viagem, em Km: 100

Uma viagem de 100,00 km vai custar R$ 0.50/km.
Valor Total: R$ 50,00.

Dist?ncia total da viagem, em Km: 500

Uma viagem de 500,00 km vai custar R$ 0.35/km.
Valor Total: R$ 175,00.

*/
