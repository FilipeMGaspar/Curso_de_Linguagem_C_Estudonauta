#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    printf("<<< EX020 - Pre�o da Passagem >>> \n\n");
    printf("======= TABELA DE PRE�OS ======= \n");
    printf("Viagem at� 200 Km \tR$ 0.50/Km");
}
/*
<<< EX020 - Pre�o da Passagem >>>

======= TABELA DE PRE�OS =======
Viagem at� 200 Km   R$ 0.50/Km
A partir de 200 Km   R$ 0.35/Km
-----------------------------------

Dist�ncia total da viagem, em Km: 100

Uma viagem de 100,00 km vai custar R$ 0.50/km.
Valor Total: R$ 50,00.

Dist�ncia total da viagem, em Km: 500

Uma viagem de 500,00 km vai custar R$ 0.35/km.
Valor Total: R$ 175,00.

*/
