#include <stdio.h>
struct teste
{
    int x = 3;
    char nome[] = "jose";
};

main()
{
    struct teste *s;
    printf("%d", s->x);
    printf("%s", s->name);
}

/* RESPOSTA DA QUESTÃO 9:
Não será impresso nada, pois o código está escrito de maneira errada */