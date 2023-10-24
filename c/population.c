#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    double inicial, final;
    do 
    {
        inicial = get_double("Populacao inicial: ");
    }
    while (inicial < 9);

    do 
    {
        final = get_double("Populacao final: ");
    }
    while (final < inicial);

    double crescimento = ((double) 1 / 3) - ((double) 1 / 4);

    double resultado = log10f((double) final / inicial) / log10f((double) 1 + crescimento);

    printf("%i", (int) resultado);
}