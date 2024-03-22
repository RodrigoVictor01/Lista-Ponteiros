#include <stdio.h>

// QUESTÃO 8: O que fazem os seguintes programas em C?

// int main()
// {
//     int vet[] = {4, 9, 13};
//     int i;
//     for (i = 0; i < 3; i++)
//     {
//         printf("%d ", *(vet + i));
//     }
// }

// RESPOSTAS QUESTÃO 8:

/* RESPOSTA 1: O programa acima utiliza o laço for para percorrer o vetor e utiliza a expressão *(vet + i), que é usada para acessar cada elemento do vetor, ou seja, acessa o valor do elemento usando
a aritmética de ponteiros (vet + i), calcula o endereço do i-ésimo elemento do vetor e *(vet + i) desreferencia esse endereço para acessar o valor armazenado nele e por último imprime os valores contidos em "vet[]", na forma decimal */

int main()
{
    int vet[] = {4, 9, 13};
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("%X ", vet + i);
    }
}

/* RESPOSTA 2: O programa acima utiliza o laço for para percorrer o vetor e utiliza a expressão (vet + i), que é usada para acessar o endereço de memória de cada elemento do vetor, ou seja, acessa o valor do elemento usando
a aritmética de ponteiros (vet + i), calcula o endereço do i-ésimo elemento do vetor e por último imprime o endereço de memória de cada elemento do vetor "vet[]", na base hexadecimal */