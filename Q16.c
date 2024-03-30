#include <stdio.h>
#include <stdlib.h>

// Função para comparar dois números
int compara(const void *a, const void *b)
{
    float num1 = *(float *)a;
    float num2 = *(float *)b;

    if (num1 < num2)
    {
        return -1;
    }
    else if (num1 > num2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;

    // Solicita ao usuário o número de elementos
    printf("Digite o número de elementos: ");
    scanf("%d", &n);

    // Aloca memória dinamicamente para armazenar os números
    float *numeros = (float *)malloc(n * sizeof(float));

    // Verifica se a alocação de memória foi bem-sucedida
    if (numeros == NULL)
    {
        printf("Erro de alocação de memória!\n");
        return -1;
    }

    // Solicita ao usuário os números
    printf("Digite os %d números:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &numeros[i]);
    }

    // Ordena os números usando a função qsort()
    qsort(numeros, n, sizeof(float), compara);

    // Imprime os números ordenados
    printf("Números ordenados:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%.2f ", numeros[i]); // Formata a saída para duas casas decimais
    }
    printf("\n");

    // Libera a memória alocada dinamicamente
    free(numeros);

    return 0;
}

/*
Explicação do código:

Função compara(): Esta função compara dois números e retorna um valor negativo se o primeiro número for menor 
que o segundo, um valor positivo se o primeiro número for maior que o segundo e zero se os números forem iguais.
Essa função é usada pela qsort() para comparar os elementos do array.

qsort(): Esta função ordena um array de elementos. Ela recebe como argumentos o ponteiro para o início do array, 
o número de elementos no array e o tamanho de cada elemento. A função também recebe um ponteiro para uma função 
de comparação que será usada para comparar os elementos do array.

main(): A função main() solicita ao usuário o número de elementos, aloca memória para armazenar os números, 
solicita ao usuário os números, ordena os números usando a função qsort() e imprime os números ordenados.

Vantagens de usar qsort():
A função qsort() é geralmente mais eficiente que o algoritmo de ordenação bolha.
A função qsort() é mais fácil de usar, pois não precisa ser implementada explicitamente.

Desvantagens de usar qsort():
A função qsort() não é estável, o que significa que a ordem dos elementos iguais no
array pode ser alterada após a ordenação.
A função qsort() pode não ser eficiente para ordenar arrays pequenos.
*/