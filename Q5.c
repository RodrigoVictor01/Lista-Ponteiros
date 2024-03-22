#include <stdio.h>

int main(void)
{
    float vet[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco\n");
    for (i = 0; i <= 4; i++)
    {
        printf("i = %d", i); // Imprime o valor do contador (0 a 4)

        printf(" vet[%d] = %.1f", i, vet[i]); // Imprime o valor do vetor na posição i, acessando de forma direta o conteudo da iésima posição do vetor

        printf(" *(f + %d) = %.1f", i, *(f + i)); // Imprime o valor do vetor na posição i, acessando o conteudo endereçado na memória (f), somando i, que contém 4 bytes.
        // Dessa forma, (f + i) está percorrendo os endereços de memória de acordo com as iterações do laço. E *(f + 1) recupera o valor guardado nestes endereços

        printf(" &vet[%d] = %X", i, &vet[i]); // Imprime o endereço de memória do vetor na posição i em base hexadecimal, com letras maiusculas

        printf(" (f + %d) = %X", i, f + i); // Imprime o endereço de memória do vetor na posição i em base hexadecimal, com letras maiusculas. Mas nessa linha, está usando o ponteiro f e somando o iésimo numero que laço percorre na memória

        printf("\n");
    }
}
