#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int num1, num2;

    num1 = get_int("Insira um numero: ");
    num2 = get_int("Insira outro numero: ");

    if (num1 < num2)
    {
        printf("O primeiro %i numero e maior que o segundo %i.", num1, num2);
    }
    else if(num1 > num2)
    {
        printf("O segundo %i numero e maior que o primeiro %i", num2, num1 );
    }
    else
    {
        printf("Ambos numeros %i sao iguais!", num1);
    }

    return 0;
}

