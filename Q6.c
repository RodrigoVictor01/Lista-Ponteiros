#include <stdio.h>

int main(void)
{
    int pulo[3];

    pulo[0] = 1;
    pulo[1] = 2;
    pulo[2] = 3;

    printf("%d", *(pulo + 2));
}

/* QUESTÃO 6: Assumindo que pulo[] é um vetor do tipo int, quais das seguintes expressões referenciam o
valor do terceiro elemento do vetor?
◦ *(pulo + 2);
◦ *(pulo + 4);
◦ pulo + 4;
◦ pulo + 2; */

/* RESPOSTA DA QUESTÃO 6:
A expressão que referencia o valor do terceiro elemento do vetor pulo[] é *(pulo + 2), pois essa expressão acessa o endereço de memória (pulo + 2)
e desreferencia, recuperando o valor que está alocado nesse endereço. */
