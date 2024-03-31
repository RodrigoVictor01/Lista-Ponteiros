#include <stdio.h>

int main(void)
{
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i = 3;

    aloha[2] = value; // Válido - aloha[2] recebe 2.2;
    // scanf("%f", &aloha); // Inválido - aloha é um array. Ao realizar o scanf() e tentar passar o valor digitado, é preciso especificar um índice deste array
    // aloha = "value";      // Inválido - aloha é um array de float e não pode receber um dado do tipo char
    // printf("%f", aloha);     // Inválido - é incorreto utilizar a string literal "%f" para imprimir o endereço de memória de aloha
    coisas[4][4] = aloha[3]; // Válido
    // coisas[5] = aloha; // Inválido - o índice de aloha é necessário para a passagem de valor entre o array e a matriz. Além disso, é necessário informar o indice  da coluna da matriz.
    // pf = value; // Inválido - pf é um ponteiro que está apontando para uma variável cujo valor já está definido. Portanto, não faz sentido essa expressão
    pf = aloha; // Válido
}
