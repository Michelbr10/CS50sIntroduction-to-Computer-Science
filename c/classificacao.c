#include <stdio.h>

int main(void)
{
    int idade_cliente, classificacao_indicativa;
    
    printf("Insira a idade do cliente: ");
    scanf("%i", &idade_cliente);
    
    printf("Insira a classificação indicativa do filme: ");
    scanf("%i", &classificacao_indicativa);
    
    if (idade_cliente <= classificacao_indicativa)
    {
        printf("Este filme não é recomendado para sua faixa etária");
    }
    else
    {
        printf("Este filme é recomendado para sua faixa etária");
    }
}