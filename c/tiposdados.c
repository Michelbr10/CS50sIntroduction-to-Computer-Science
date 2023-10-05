#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // nome, idade, telefone
    string name = get_string("Enter your name: ");
    int age = get_int("Enter your age: ");
    string phone = get_string("Enter your phone number: ");

    printf("Ola, sou %s. Tenho %i anos. Meu numero e %s.", name, age, phone);
}