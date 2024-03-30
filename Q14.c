#include <stdio.h> // Inclui a biblioteca padrão de entrada/saída em C

int soma(int a, int b){ // Definição da função "soma" que recebe dois inteiros como parâmetros
    return a + b; // Retorna a soma dos dois inteiros
}

int subtrai(int a, int b){ // Definição da função "subtrai" que recebe dois inteiros como parâmetros
    return a - b; // Retorna a subtração do primeiro pelo segundo inteiro
}

float quadrado(int a){ // Definição da função "quadrado" que recebe um inteiro como parâmetro
    return a * a; // Retorna o quadrado do inteiro como um número de ponto flutuante
}

int main(){ // Função principal do programa
    int x = 2; // Declaração e inicialização da variável "x" com o valor 2
    int y = 5; // Declaração e inicialização da variável "y" com o valor 5
    int* pInteiro = &x; // Declaração de um ponteiro para inteiro e inicialização com o endereço de "x"
    int (*pfunc)(); // Declaração de um ponteiro para função

    pfunc = &subtrai; // Atribui o endereço da função "subtrai" ao ponteiro "pfunc"
    printf("A soma de x e y vale: %d\n", pfunc(x, y)); // Imprime a soma de "x" e "y" usando a função apontada por "pfunc"

    pfunc = &soma; // Atribui o endereço da função "soma" ao ponteiro "pfunc"
    printf("A diferenca entre x e y vale: %d\n", pfunc(x, y)); // Imprime a diferença entre "x" e "y" usando a função apontada por "pfunc"

    pfunc = &quadrado; // Atribui o endereço da função "quadrado" ao ponteiro "pfunc"
    printf("O quadrado de x vale: %f\n", pfunc(x)); // Imprime o quadrado de "x" usando a função apontada por "pfunc"

    return 0; // Retorna 0 indicando que o programa foi executado com sucesso
}


/*Esta é a função principal main(). Dentro dela, são declaradas duas variáveis inteiras x e y com os valores 2 e 5,
respectivamente. Em seguida, é declarado um ponteiro para inteiro pInteiro que aponta para o endereço de memória de
x. Também é declarado um ponteiro para função pfunc sem especificar argumentos ou tipo de retorno.
Depois, pfunc é atribuído o endereço da função subtrai(), e o resultado da função é impresso usando printf(),
passando x e y como argumentos. Em seguida, pfunc é atribuído o endereço da função soma(), e o resultado da função
é impresso novamente usando printf(). Finalmente, pfunc é atribuído o endereço da função quadrado(), e o resultado
da função é impresso usando printf().*/