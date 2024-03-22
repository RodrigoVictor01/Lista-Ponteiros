#include <stdio.h>

int main(void)
{
    int i = 5, *p;
    p = &i;
    printf("%p %p %d %d %d %d\n", p, p + 1, *p + 2, **&p, 3 * *p, **&p + 4);
}

/* QUESTÃO 2:
Mostre o que será impresso por programa supondo que a variável i ocupa o endereço 4094 na
memória e que nessa arquitetura os inteiros possuem 2 bytes de tamanho */

/* REPSOSTA DA QUESTÃO 2:
Supondo que um dado do tipo inteiro ocupa 2 bytes na memória e o endereço de i na memória é 4094 e que ao declarar a string literal "%p" em um dos argumentos da função printf(),
nos retornará o endereço na memória de i, em formato hexadecimal.

Portanto, a saída será a seguinte:
(endereço 4094 em formato hexadecimal, endereço na memoria de i em formato hexadecimal + 1, 5 + 2, 5, 3*5, 5 + 4) => (0061FF0C, 0061FF10, 7, 5, 15, 9). */