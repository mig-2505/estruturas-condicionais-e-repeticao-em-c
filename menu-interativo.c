#include <stdio.h>
int main() {
    int opcao, numero;
    while (1) {
        printf("\n--- MENU INTERATIVO ---\n");
        printf("1. Verificar Par ou Ímpar\n");
        printf("2. Imprimir de 1 a 10\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                printf("Digite um número: ");
                scanf("%d", &numero);
                if (numero % 2 == 0) {
                    printf("O número %d é PAR.\n", numero);
                } else {
                    printf("O número %d é ÍMPAR.\n", numero);
                }
                break;
            case 2:
                for (int i = 1; i <= 10; i++) {
                    printf("%d ", i);
                }
                printf("\n");
                break;
            case 3:
                printf("Encerrando o programa.\n");
                return 0;
            default:
                printf("Opção inválida. Tente novamente.\n");
                continue; // Retorna ao início do loop
        }
    }
}