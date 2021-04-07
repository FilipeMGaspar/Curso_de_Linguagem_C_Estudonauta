#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese"); //Define a lingua para Portugês

    printf("=.=.=.=.=.=.=.=.=.=.=.=.=.=.= \n");
    printf(" \\a \t=\tBeep \n");
    printf(" \\n \t=\tNova Linha \n");
    printf(" \\t \t=\tTabulação \n");
    printf(" \\\\ \t=\tBarra \n");
    printf(" %%%% \t=\tPercentagem \n");
    printf(" \\? \t=\tInterrogação \n");
    printf("=.=.=.=.=.=.=.=.=.=.=.=.=.=.= \n");
}

/*
<<<< EX002 - Especiais >>>>

=.=.=.=.=.=.=.=.=.=.=.=.=.=.=
\a  =   Beep
\n  =   Nova Linha
\t  =   Tabulação
\\  =   Barra
%%  =   Percentagem
\?  =   Interrogação
=.=.=.=.=.=.=.=.=.=.=.=.=.=.=
*/
