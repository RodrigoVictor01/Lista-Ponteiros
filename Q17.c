#include <stdio.h>
#include <stdlib.h>

// Função para comparar dois números inteiros
int compara_int(const void *a, const void *b)
{
    int num1 = *(int *)a;
    int num2 = *(int *)b;

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

// Função de ordenação genérica
void ordena(void *array, int n, size_t tamanho_elemento, int (*comparador)(const void *, const void *))
{
    qsort(array, n, tamanho_elemento, comparador);
}

int main()
{
    int n;

    // Solicita ao usuário o número de elementos
    printf("Digite o número de elementos: ");
    scanf("%d", &n);

    // Aloca memória dinamicamente para armazenar os números
    int *numeros = (int *)malloc(n * sizeof(int));

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
        scanf("%d", &numeros[i]);
    }

    // Ordena os números usando a função ordena()
    ordena(numeros, n, sizeof(int), compara_int);

    // Imprime os números ordenados
    printf("Números ordenados:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    // Libera a memória alocada dinamicamente
    free(numeros);

    return 0;
}

/*

Explicação do código:

Funções:
1. Função compara_int():
Esta função compara dois números inteiros e retorna um valor negativo se o primeiro número for menor que o segundo, um valor positivo se o primeiro número for maior que o segundo e zero se os números forem iguais.
A função recebe dois argumentos: a e b. Estes são ponteiros para os elementos que serão comparados.
A função converte os ponteiros a e b para o tipo int *. Isso permite acessar os valores dos inteiros apontados por esses ponteiros.
As variáveis num1 e num2 armazenam os valores dos inteiros que serão comparados.
A função compara os valores de num1 e num2 usando operadores condicionais:
Se num1 for menor que num2, a função retorna -1.
Se num1 for maior que num2, a função retorna 1.
Se num1 e num2 forem iguais, a função retorna 0.

2. Função ordena():
Esta função ordena um array de elementos genéricos.

A função recebe como argumentos:
array: o ponteiro para o início do array.
n: o número de elementos no array.
tamanho_elemento: o tamanho de cada elemento do array.
comparador: a função de comparação que será usada para comparar os elementos do array.

A função qsort() é chamada para ordenar o array de acordo com os resultados da função comparador.

Main:
A função main() solicita ao usuário o número de elementos, aloca memória para armazenar os números, solicita ao usuário os números, ordena os números usando a função ordena() e imprime os números ordenados.

Observações:
Este código é um exemplo de como ordenar inteiros em C usando a função qsort() e uma função de comparação personalizada.
A função compara_int() pode ser modificada para comparar outros tipos de dados.
A função ordena() é uma função genérica que pode ser usada para ordenar arrays de qualquer tipo de dado, desde que seja fornecida uma função de comparação adequada.
*/
