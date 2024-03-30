#include <stdio.h>
#include <stdlib.h>

// Função para trocar dois números
void troca(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

/*Função chamada troca, que recebe dois ponteiros para float como argumentos.
Essa função serve para trocar os valores apontados pelos ponteiros a e b. Uma variável temporária temp é usada 
para armazenar o valor de *a antes de ser sobrescrito.*/

// Função para ordenar os números
void ordena(float *numeros, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                troca(&numeros[j], &numeros[j + 1]);
            }
        }
    }
}
/*Aqui, temos a função ordena, que recebe um array de floats (numeros) e o número de elementos nesse array (n).
Esta função implementa o algoritmo de ordenação bolha para ordenar os elementos do array em ordem crescente. A função troca() 
é chamada quando dois elementos adjacentes no array estão fora de ordem.*/

int main() {
    int n;

    // Solicita ao usuário o número de elementos
    printf("Digite o número de elementos: ");
    scanf("%d", &n);

    /*Na função main(), declaramos uma variável n para armazenar o número de elementos que o usuário deseja inserir.
    Em seguida, solicitamos ao usuário que insira o número de elementos*/

    // Aloca memória dinamicamente para armazenar os números
    float *numeros = (float *)malloc(n * sizeof(float));
    /*Aqui, alocamos dinamicamente memória para armazenar os números fornecidos pelo usuário. 
    Usamos malloc() para alocar memória suficiente para armazenar n elementos do tipo float. 
    O tipo de dados retornado por malloc() é um ponteiro genérico (void *), então fazemos um casting
    para (float *) para indicar que queremos um ponteiro para float.*/

    // Verifica se a alocação de memória foi bem-sucedida
    if (numeros == NULL) {
        printf("Erro de alocação de memória!\n");
        return -1;
    }
    /*Verificamos se a alocação de memória foi bem-sucedida. Se numeros for NULL, isso indica 
    que não houve memória suficiente disponível e exibimos uma mensagem de erro antes de retornar
    -1 para indicar um erro ao sistema operacional.*/

    // Solicita ao usuário os números
    printf("Digite os %d números:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &numeros[i]);
    }
    /*Neste trecho, solicitamos ao usuário que insira os n números. Usamos um loop for para ler cada número e armazená-lo no array numeros.*/

    // Chama a função para ordenar os números
    ordena(numeros, n);
    /*Chamamos a função ordena() para ordenar os números armazenados no array numeros.*/

    // Imprime os números ordenados
    printf("Números ordenados:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", numeros[i]); // Formata a saída para duas casas decimais
    }
    printf("\n");
    /*Por fim, imprimimos os números ordenados no console, formatando cada número com duas casas decimais.*/

    // Libera a memória alocada dinamicamente
    free(numeros);
    /*Liberamos a memória alocada dinamicamente utilizando free() para evitar vazamentos de memória.*/
    return 0;
    /*Retornamos 0 para indicar que o programa foi executado com sucesso.*/
}
