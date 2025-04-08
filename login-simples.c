#include <stdio.h>
int main()
{
    int numero;
    do
    {
        printf("Digite uma senha de 4 digitos: ");
        scanf("%d", &numero);
    } while (numero == 4321);
    if (numero == 4321)
    {
        printf("Acesso liberado.\n");
    }
}