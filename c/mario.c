#include <stdio.h>
#include <cs50.h>

int get_size();
void print_grid(int size);

int main(void)
{
    int num = get_size();
    print_grid(num);
}

int get_size(void)
{
    int num;
    do
    {
        num = get_int("Tamanho: ");
    }
    while (num < 1);
    return num;
}

void print_grid(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int n = 0; n < size; n++)
        {
            printf("#");
        }
        printf("\n");
    }
}