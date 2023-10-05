#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char aceitar = get_char("Aceita ou nao (s/n)\n");

    if (aceitar == 's' || aceitar == 'S')
    {
        printf("Aceito.\n");
    }
    else if (aceitar == 'n' || aceitar == 'N')
    {
        printf("Recusado.\n");
    }
    else
    {
        printf("Erro!\n");
    }
}
