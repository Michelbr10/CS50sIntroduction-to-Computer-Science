#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int inicial, final;

    // população inicial
    do {
        inicial = get_int("Populacao inicial: \n");
    }
    while (inicial < 9);

    // população final
    do {
    final = get_int("Populacao final: \n");
    }
    while (final < inicial);

    // crescimento anual
    int crescimento = ((inicial / 3) - (inicial / 4));

    // anos para atingir a meta
    double anos = ((double) log(final / inicial)) / ((double) log(1 + crescimento / inicial));

    printf("Anos: %d", log(anos));
}