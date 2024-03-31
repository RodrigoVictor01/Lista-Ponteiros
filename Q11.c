/* QUESTÃO 11: Seja x um vetor de 4 elementos, declarado da forma TIPO x[4]. Suponha que depois da
declaração, x esteja armazenado no endereço de memória 4092 (ou seja, o endereço de x[0]).
Suponha também que na máquina seja usada uma variável do tipo char ocupa 1 byte, do tipo
int ocupa 2 bytes, do tipo float ocupa 4 bytes e do tipo double ocupa 8 bytes. Quais serão os
valores de x + 1, x + 2 e x + 3 se:

◦ x for declarado como char?
◦ x for declarado como int?
◦ x for declarado como float?
◦ x for declarado como double?

Implemente um programa de computador para testar estas suposições e compare as respostas
oferecidas pelo programa com as respostas que você idealizou. */

// char = 1 byte, int = 2 bytes, float = 4 bytes, double = 8 bytes.

#include <stdio.h>

int main(void)
{
    // char x[4]; // ocupa 1 byte na memória

    // short int x[4]; // ocupa 2 bytes na memória

    // int x[4]; // ocupa 4 bytes na memória

    double x[4]; // ocupa 8 bytes na memória

    printf("x = %d\n"
           "x + 1 = %d\n"
           "x + 2 = %d\n"
           "x + 3 = %d\n",
           x, x + 1, x + 2, x + 3);
}

/*RESPOSTA DA QUESTÃO 11: No cenário abaixo,

Se x for declarado como char (1 byte): x + 1 = 4093; x + 2 = 4094; x + 3 = 4095;

Se x for declarado como int (2 bytes): x + 1 = 4095; x + 2 = 4097; x + 3 = 4099;

Se x for declarado como float (4 bytes): x + 1 = 4096; x + 2 = 4100; x + 3 = 4104;

Se x for declarado como double (8 bytes): x + 1 = 4100; x + 2 = 4108; x + 3 = 4116;

OBS: Para testar as suposições propostas, basta descomentar alguma das 4 linhas onde foram declaradas
o vetor x[4] com seus diferentes tipos. Os endereços de memória não serão iguais aos da questão, mas você verá o "salto" no endereço de memória ao compilar e executar o programa.

*/
