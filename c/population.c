#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int population;
    do {
        population = get_int("Population of Lhamas: \n");
    }
    while (population < 0);

    int resultado = population + (population/3) - (population/4);

    printf("Populacao: %i", resultado);
}