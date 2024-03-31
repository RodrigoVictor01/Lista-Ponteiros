#include <stdio.h>
#include <stdlib.h>

/*-----------------------EXEMPLO 1-----------------------*/

// int main(void)
// {

//     int *ptr;

//     // Loop infinito para demonstrar o vazamento de memória
//     while (1)
//     {
//         // Aloca memória a cada iteração do loop
//         ptr = (int *)malloc(1000 * sizeof(int));

//         // Verifica se a alocação de memória foi bem-sucedida
//         if (ptr == NULL)
//         {
//             printf("Erro: Falha na alocação de memória!\n");
//             return 1; // Encerra o programa em caso de falha na alocação
//         }

//         // O programa não libera a memória alocada
//         // free(ptr);
//     }
// }

/*-----------------------EXEMPLO 2-----------------------*/

void funcaoVazamento1()
{
    // Aloca memória para um array de inteiros
    int *ptr = (int *)malloc(100 * sizeof(int));

    // Verifica se a alocação de memória foi bem-sucedida
    if (ptr == NULL)
    {
        printf("Erro: Falha na alocação de memória!\n");
        return;
    }

    // Esquecemos de liberar a memória alocada
    // free(ptr);
}

/*-----------------------EXEMPLO 3-----------------------*/

// void funcaoVazamento2()
// {
//     int *ptr = (int *)malloc(sizeof(int));

//     // ptr = NULL; // O ponteiro perde a referência para a memória alocada.

//     // O espaço de memória alocado não pode mais ser liberado, pois, agora, a referência de ptr = NULL, resultando em um vazamento de memória.

//     return 0;
// }

int main(void)
{

    // Chamada das funções

    funcaoVazamento1();

    // funcaoVazamento2();
}

/*  Explicação: Em C, ocorre um memory leak, também conhecido como vazamento de memória, quando o programa não libera memória não utilizada para o sistema operacional,
devido ao gerenciamento inadequado da alocação dinâmica. Isso é comum, já que C não possui recursos automáticos de gerenciamento de memória. Para alocar memória,
usamos funções como malloc, calloc e realloc, que retornam um ponteiro para a memória alocada, ou NULL em caso de falha. É crucial liberar a memória não utilizada usando a função free() quando necessário para evitar falhas no programa.
Acima, temos 3 exemplos de vazamentos de memória */