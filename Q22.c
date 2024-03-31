#include <stdio.h>
int main(void)
{
    int a, b;
    int x, y, z;
    int i = 0;
    scanf("%d %d", &a, &b); // a = 10 e b = 1. Na base binária: a = 1010 e b = 0001
    x = a;
    y = b;
    z = a + b;
    while (a)
    { // a é dividido por 2 a cada iteração, while terá 4 iterações (pois a foi inicializado como 10)

        x = x | b; // O operador | significa OU bit a bit. Se pelo menos um deles tiver valor 1 retornará 1 naquela posição
        // Analisa os 2 valores em binario (1010 | 0001), faz a iteração bit por bit
        // 1° It
        //  1010 | 0001 = 1011 = x

        // 2° It   (b = b << 1)
        // 1011 | 0010 = 1011 = x

        // 3° It   (b = b << 1)
        // 1011 | 0100 = 1111 = x

        // 4° It   (b = b << 1)
        // 1111 | 1000 = 1111
        // x = 1111; x = 15

        y = y ^ a; // XOR bit a bit. se ambos os bits em uma posição forem diferentes, o resultado será 1, se forem iguais, o resultado será 0.
        // 1° It
        // 0001 ^ 1010 = 1011 = y

        // 2° It   (a = a >> 1)
        // 1011 ^ 0101 = 1110 = y

        // 3° It   (a = a >> 1)
        // 1110 ^ 0010 = 1100 = y

        // 4° It   (a = a >> 1)
        // 1100 ^ 0001 = 1101
        // y = 1101; y = 13

        z = z & (a + b); // AND bit a bit. O resultado é 1 se ambos os bits forem 1
        // 1° It
        // 1011 & 1011 = 1011 = z

        // 2° It   (a = a >> 1) e (b = b << 1)
        // 1011 & (0101 + 0010)
        // 1011 & 0111 = 0011 = z

        // 3° It   (a = a >> 1) e (b = b << 1)
        // 0011 & (0010 + 0100)
        // 0011 & 0110 = 0010 = z

        // 4° It   (a = a >> 1) e (b = b << 1)
        // 0010 & (0001 + 1000)
        // 0010 & 1001 = 0000
        // z = 0;

        a = a >> 1; // desloca todos os bits em a uma posição para a direita, divide o inteiro positivo por 2
        b = b << 1; // desloca todos os bits em b uma posição para a esquerda, multiplica o inteiro positivo por 2
        i = i + 1;
    }
    printf("%d %d %d\n", x, y, z);
    printf("Count = %d", i);

    // Valor final:
    // x = 15
    // y = 13
    // z = 0
}