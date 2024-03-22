#include <stdio.h>
void main()
{
    int const *x = 3;
    printf("%d", ++(*x));
}

/* RESPOSTA DA QUESTÃO 10:
Não é possível compilar esse programa sem erros, já que x é uma variável int const * não é possível inicializá-la com o valor 3, e também não pode somar um inteiro a ela pois x é um int do tipo const. */