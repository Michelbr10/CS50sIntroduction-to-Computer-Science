#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int population = get_int("Numero de Lhamas: ");
    int nasce = population/3;
    int morre = population/4;
    int resultado = population + nasce - morre;

    printf("Populacao: %i", resultado);
}