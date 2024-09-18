#include <stdio.h>

int main() {
    int num;
    int max = -2147483648; // Inicializa o máximo com o menor valor possível para um inteiro
    int min = 2147483647;  // Inicializa o mínimo com o maior valor possível para um inteiro

    printf("Digite números inteiros. O programa termina quando um número negativo e par é inserido.\n");

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &num);

        // Verifica se o número é negativo e par para encerrar o loop
        if (num < 0 && num % 2 == 0) {
            break;
        }

        // Atualiza o maior e o menor número
        if (num > max) {
            max = num;
        }
        if (num < min) {
            min = num;
        }
    }

    // Verifica se pelo menos um número foi inserido
    if (max == -2147483648 || min == 2147483647) {
        printf("Nenhum número válido foi inserido.\n");
    } else {
        // Calcula e imprime o produto do maior pelo menor número
        int produto = max * min;
        printf("O maior número é %d\n", max);
        printf("O menor número é %d\n", min);
        printf("O produto do maior pelo menor número é %d\n", produto);
    }

    return 0;
}
