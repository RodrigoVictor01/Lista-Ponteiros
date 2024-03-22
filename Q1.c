#include <stdio.h>

int main(void)
{
    int i = 3, j = 5;
    int *p, *q;
    p = &i;
    q = &j;

    printf("%d\n", p);    // endereço na memoria da variavel i = (6422296)
    printf("%d\n", &p);   // endereço na memoria da variavel p = (6422288)
    printf("%d\n", *&p);  // retorna o conteudo gravado no endereço da memoria da variavel p = (6422296)
    printf("%d\n", **&p); // retorna o conteudo do conteudo gravado no endereço da memoria da variavel p = (3)
}

/* QUESTÃO 1:
Determine o valor das seguintes expressões, justificando o porquê de cada resultado: */

/* RESPOSTA DA QUESTÃO 1:
◦ p == &i; - A saída será 1, pois a condição é verdadeira.

◦ *p - *q; - A saída será -2 porque *p e *q são ponteiros que recuperam os valores guardados em um endereço de memória das variáveis i e j.

◦ **&p; - A saída será 3 porque retorna o conteudo do conteudo gravado no endereço da memoria da variavel p.

◦ 3 - *p/(*q) + 7; - O resultado será 10, pois ao dividir *p/(*q), estamos realizando uma divisão inteira que resultará em um número em ponto flutuando cuja sua parte inteira é 0. Logo,
a expressão ficará assim: 3 - 0 + 7 = 10. */
