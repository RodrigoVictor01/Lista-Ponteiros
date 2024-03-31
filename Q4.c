#include <stdio.h>

int main()
{
    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;

    // letra a
    valor = 10;  // "valor" iniciou com 10
    p1 = &valor; // endereco de memoria de "valor"
    *p1 = 20;    // *p1 agora troca o conteudo que tinha em "valor"
    // printf("%d \n", valor);

    // letra b
    temp = 26.5; // "temp" iniciou com 26.5
    p2 = &temp;  // endereço de memoria de "temp"
    *p2 = 29.0;  // *p2 agora troca o conteudo que tinha em "temp"
    // printf("%.1f \n", temp); // imprime o float com uma casa decimal de precisão ("%.1f")

    // letra c
    p3 = &nome[0]; // endereço de memoria de "nome" de posição 0
    aux = *p3;     // "aux" recebe o ponteiro *p3 que tem o conteudo que p3 armazena, onde está guardado o endereço de memoria de "nome" na posição 0
    // printf("%c \n", aux); // exibe o conteudo de *p3

    // letra d
    p3 = &nome[4]; // endereço de memoria de "nome" de posição 4
    aux = *p3;     // "aux" recebe o ponteiro *p3 que tem o conteudo que p3 armazena, onde está guardado o endereço de memoria de "nome" na posição 0
    // printf("%c \n", aux);

    // letra e
    p3 = nome;
    // printf("%c\n", *p3);

    // letra f
    p3 = p3 + 4;
    // printf("%c \n", *p3);

    // letra g
    p3--;
    // printf("%c \n", *p3);

    // letra h
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor;
    idade = *p4;
    // printf("%d \n", idade);

    // letra i
    p5 = p4 + 1;
    idade = *p5;
    // printf("%d \n", idade);

    // letra j
    p4 = p5 + 1;
    idade = *p4;
    // printf("%d \n", idade);

    // letra l
    p4 = p4 - 2;
    idade = *p4;
    // printf("%d \n", idade);

    // letra m
    p5 = &vetor[2] - 1;
    // printf("%d \n", *p5);

    // letra n
    p5++;
    printf("%d \n", *p5);
    return (0);
}

/* QUESTÃO 4:
Determine o que será mostrado pelo seguinte programa (compile-o, execute-o e verifique se
foram obtidas as respostas esperadas, justificando o porque de cada uma). */

/* REPSOSTA DA QUESTÃO 4, letra a:
A variavel "valor" inicia com 10. após isso, p1 recebe o endereço na memória da variavel "valor". Com isso, *p1 agora tem o conteudo que p1 armazena, ou seja, aponta para "valor".
Na linha seguinte, o valor de *p1, que era 10, passa a valer 20. */

/* REPSOSTA DA QUESTÃO 4, letra b:
Não muito diferente da letra a, a letra b inicia com temp = 26,5. Após isso, p2 recebe o endereço na memória de "temp" e então, *p2 pode ser alterado, pois *p2 aponta para "temp".
Na função printf(), a string literal "%f" é declarada com uma casa decimal de precisão. */

/* REPSOSTA DA QUESTÃO 4, letra c:
p3 recebe o endereço na memoria de "nome" na posição 0 e grava o conteúdo de p3 em "aux"
Saida: "P" */

/* REPSOSTA DA QUESTÃO 4, letra d:
p3 recebe o endereço na memoria de "nome" na posição 4 e grava o conteúdo de p3 em "aux"
Saida: "e" */

/* REPSOSTA DA QUESTÃO 4, letra e:
Ao imprimir *p3, o valor de saída será apenas o elemento na posição 0 do ponteiro p3 que aponta para *nome = "Ponteiros" e a saída será "P" */

/* REPSOSTA DA QUESTÃO 4, letra f:
Ao imprimir *p3, o valor de saída será apenas o elemento na posição 4 do ponteiro p3 que aponta para *nome = "Ponteiros" e a saída será "e", pois foi incrementado 0 + 4 em p3 */

/* REPSOSTA DA QUESTÃO 4, letra g:
Ao imprimir *p3, o valor de saída será apenas o elemento na posição 3 do ponteiro p3 que aponta para *nome = "Ponteiros" e a saída será "t", pois p3 guardava o elemento na posição 4 e foi decrementanda uma posição (4 - 1) = 3 */

/* REPSOSTA DA QUESTÃO 4, letra h:
Ao imprimir "idade", o valor de saída será o que está guardado em *p4 e p4 aponta para "vetor". Portanto, o valor da saída será o 31, pois é o valor que está guardado na posição 0 de "vetor" */

/* REPSOSTA DA QUESTÃO 4, letra i:
Ao imprimir "idade", o valor de saída será o que está guardado em *p5 e p5 aponta para "vetor", mas foi incrementado 1 ao valor de p4 (0 + 1). Portanto, o valor da saída será 45, pois é o valor que está guardado na posição 1 de "vetor" */

/* REPSOSTA DA QUESTÃO 4, letra j:
Ao imprimir "idade", o valor de saída será o que está guardado em *p4 e p4 aponta para "vetor". Portanto, o valor da saída será 27, pois é o valor que está guardado na posição 2 de "vetor" */

/* REPSOSTA DA QUESTÃO 4, letra l:
Inicialmente, p4 está guardando o endereço de memória de "vetor[2]", ao realizar "p4 = p4 - 2;" faz com que p4 agora guarde o endereço de memória de vetor[0], pois decrementou 2 posições no endereço de memória.
"idade" irá guardar o valor atual de p4 através da expressão "idade = *p4;". Ao imprimir "idade", *p4 desreferencia p4, que aponta vetor[0] e exibe o valor nesta posição, que é 31 */

/* REPSOSTA DA QUESTÃO 4, letra m:
p5 recebe o endereço de memória do valor guardado na posição 2 de "vetor" (vetor[2]) e decrementa 1 no endereço de memória. Após realizar essa operação, p5 guarda o endereço de memória de vetor[1]. Ao imprimir *p5, é exibido o valor 45, que está
na posição 1 de "vetor" */

/* REPSOSTA DA QUESTÃO 4, letra n:
 p5++; -> incrementa 1 ao ponteiro p5. Antes p5 guardava o endereço de memória de vetor[1]. Ao realizar este incremento, p5 agora guarda o endereço de memória de vetor[2]. Ao imprimir *p5, é exibido o valor 27, que está
na posição 2 de "vetor" */