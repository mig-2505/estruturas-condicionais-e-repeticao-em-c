#include <stdio.h>
int main()
{
    int senha;
    do
    {
        printf("Digite a senha (4 dígitos): ");
        scanf("%d", &senha);
        if (senha != 4321)
        {
            printf("Senha incorreta. Tente novamente.\n");
        }
    } while (senha != 4321);
    printf("Acesso concedido!\n");
    return 0;
}