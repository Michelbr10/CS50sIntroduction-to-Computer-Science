#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("Name: ");
    printf("Ola, %s\n", name);
    return 0;
}