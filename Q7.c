#include <stdio.h>

int main(void)
{
    int mat[4], *p, x;

    p = mat + 1;
    p = mat;
    p = mat;
    x = (*mat);
}

/* QUESTÃO 7: Considerando a declaração
int mat[4], *p, x;
quais das seguintes expressões são válidas? Justifique */

/* RESPOSTA DA QUESTÃO 7:
Todas as expressões na função main(void) são válidas.
p = mat + 1; - atribui ao ponteiro p o endereço de memória do segundo elemento do vetor mat[]
p = mat; - atribui ao ponteiro p o endereço de memória do primeiro elemento do vetor mat[]
p = mat; - atribui ao ponteiro p o endereço de memória do primeiro elemento do vetor mat[]
x = (*mat); - atribui a "x" conteúdo do endereço de memória de mat. Como não foi declarado nenhum valor nas posições de mat[],
"x" recebe o endereço de memória equivalente à posição 0 de mat - mat[0]. Se, por exemplo, tivéssemos declarado mat[0] = 1;
e fizéssemos printf("%d", x); a saída seria 1. */
