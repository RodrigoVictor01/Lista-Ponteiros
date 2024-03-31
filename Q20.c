#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída
#include <stdlib.h>

// Define a função `multiplica_matrizes` que recebe seis argumentos e realiza a multiplicação das matrizes A e B, armazenando o resultado em C.
void multiplicar_matrizes(int **A, int **B, int **C, int linhasA, int colunasA, int colunasB) {

  // Declara as variáveis `i`, `j` e `k` que serão usadas nos loops aninhados.
  int i, j, k;

  // Loop que percorre cada linha da matriz C.
  for (i = 0; i < linhasA; i++) {

    // Loop que percorre cada coluna da matriz C.
    for (j = 0; j < colunasB; j++) {

      // Inicializa o elemento `C[i][j]` com o valor 0.
      C[i][j] = 0;

      // Loop que percorre cada elemento da linha `i` da matriz A e da coluna `j` da matriz B.
      for (k = 0; k < colunasA; k++) {

        // Acumula o produto dos elementos `A[i][k]` e `B[k][j]` na variável `C[i][j]`.
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }
}

// Define a função `imprimeMatriz` que recebe três argumentos e imprime a matriz.
void imprimeMatriz(int **matrix, int linhas, int colunas) {

  // Declara as variáveis `i` e `j` que serão usadas nos loops aninhados.
  int i, j;

  // Loop que percorre cada linha da matriz.
  for (i = 0; i < linhas; i++) {

    // Loop que percorre cada coluna da matriz.
    for (j = 0; j < colunas; j++) {

      // Imprime o elemento `matrix[i][j]` da matriz.
      printf("%d ", matrix[i][j]);
    }

    // Pula uma linha após imprimir cada linha da matriz.
    printf("\n");
  }
}

int main() {

  // Define as dimensões das matrizes.
  int linhasA = 2, colunasA = 3, linhasB = 3, colunasB = 4;

  // Aloca memória para as matrizes A, B e C usando `malloc`.
  int **A = (int **)malloc(linhasA * sizeof(int *));
  for (int i = 0; i < linhasA; i++) {
    A[i] = (int *)malloc(colunasA * sizeof(int));
  }

  int **B = (int **)malloc(linhasB * sizeof(int *));
  for (int i = 0; i < linhasB; i++) {
    B[i] = (int *)malloc(colunasB * sizeof(int));
  }

  int **C = (int **)malloc(linhasA * sizeof(int *));
  for (int i = 0; i < linhasA; i++) {
    C[i] = (int *)malloc(colunasB * sizeof(int));
  }

  // Preenche as matrizes A e B com valores usando loops aninhados.
  for (int i = 0; i < linhasA; i++) {
    for (int j = 0; j < colunasA; j++) {
      A[i][j] = i + j;
    }
  }

  for (int i = 0; i < linhasB; i++) {
    for (int j = 0; j < colunasB; j++) {
      B[i][j] = i + j + 1;
    }
  }

  // Chama a função `multiplica_matrizes` para realizar a multiplicação de A e B, armazenando o resultado em C.
  multiplicar_matrizes(A, B, C, linhasA, colunasA, colunasB);

  // Imprime as matrizes A, B e C usando a função `imprimeMatriz`.
  printf("Matriz A:\n");
  imprimeMatriz(A, linhasA, colunasA);

  printf("Matriz B:\n");
  imprimeMatriz(B, linhasB, colunasB);

  printf("Matriz C (AxB):\n");
  imprimeMatriz(C, linhasA, colunasB);

  // Liberar memória alocada
  for (int i = 0; i < linhasA; i++) {
    free(A[i]);
  }
  free(A);

  for (int i = 0; i < linhasB; i++) {
    free(B[i]);
  }
  free(B);

  for (int i = 0; i < linhasA; i++) {
    free(C[i]);
  }
  free(C);

  return 0;
}
