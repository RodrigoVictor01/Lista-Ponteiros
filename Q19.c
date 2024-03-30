#include <stdio.h>
#include <stdlib.h>

void somaVetores(int *vet1, int *vet2, int *resultado, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        resultado[i] = vet1[i] + vet2[i];
    }
}

int main()
{
    int tamanho;
    int *vet1, *vet2, *resultado;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);

    vet1 = (int *)malloc(tamanho * sizeof(int));
    vet2 = (int *)malloc(tamanho * sizeof(int));
    resultado = (int *)malloc(tamanho * sizeof(int));

    printf("Digite os elementos do vet1: ");
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vet1[i]);
    }

    printf("Digite os elementos do vet2: ");
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vet2[i]);
    }

    somaVetores(vet1, vet2, resultado, tamanho);
    printf("Soma dos vetores: ");
    for (int i = 0; i < tamanho; i++){
        printf("%d ", resultado[i]);
    }
  
    printf("\n");

    free(vet1);
    free(vet2);
    free(resultado);
    vet1 = NULL;
    vet2 = NULL;
    resultado = NULL;

    return 0;
}


