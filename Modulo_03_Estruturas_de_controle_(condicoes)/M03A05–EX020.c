#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    printf("<<< EX020 - Preço da Passagem >>> \n\n");
    printf("======= TABELA DE PREÇOS ======= \n");
    printf("Viagem até 200 Km \tR$ 0.50/Km");
}
/*
<<< EX020 - Preço da Passagem >>>

======= TABELA DE PREÇOS =======
Viagem até 200 Km   R$ 0.50/Km
A partir de 200 Km   R$ 0.35/Km
-----------------------------------

Distância total da viagem, em Km: 100

Uma viagem de 100,00 km vai custar R$ 0.50/km.
Valor Total: R$ 50,00.

Distância total da viagem, em Km: 500

Uma viagem de 500,00 km vai custar R$ 0.35/km.
Valor Total: R$ 175,00.

*/
