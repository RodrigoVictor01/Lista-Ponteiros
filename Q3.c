#include <stdio.h>

int main(void)
{
    int i, j;
    int *p, *q;

    p = &i; // Expressão legal, pois  p recebe o endereço na memoria de i

    *q = &j; // Essa expressão é ilegal, pois *q guarda um conteúdo. Não faz sentido atribuir o endereço de memoria de j para *q

    p = &*&i; // Expressão legal, pois  p recebe o endereço na memoria de i

    // i = (*&)j; // Expressão ilegal. (*&)j é um erro de sintaxe - está tentando desreferenciar o conteúdo de j, porém os parênteses estão impedindo tal ação

    i = *&j; // Expressão legal, pois i armazena o conteúdo de j, isso porque * pega o conteúdo que no endereço de memória de j

    i = *&*&j; // Expressão legal, pois, no fim das contas o objetivo é o mesmo da expressão acima (linha 12). Obtem-se o mesmo resultado: atribui o valor de j a i

    q = *p; // Expressão ilegal, pois q é um ponteiro para int e *p é apontado por p. Sabendo que p recebe um endereço de memoria, não devemos atribuir um endereço de memória para um ponteiro que aponta para int

    i = (*p)++ + *q; // Expressão pode ser legal ou ilegal. Irá depender do contexto que é usado e da forma como os ponteiros p e q são tratados. Se p é um ponteiro constante, não pode ser incrementado valor algum
    // e *q tenta acessar o valor apontado por q, que não garante estar apontando para uma variável válida no momento que o programa for executado. Nesse cenário, a expressão é ilegal.

    printf("%d\n", p);
}
