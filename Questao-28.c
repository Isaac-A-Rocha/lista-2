#include <stdio.h>

int main() {
    unsigned char X, Y;
    unsigned char mask;

    // Leitura dos valores
    printf("Digite o valor de X (0-255): ");
    scanf("%hhu", &X); // %hhu é usado para ler unsigned char

    printf("Digite o valor de Y (5 ou maior): ");
    scanf("%hhu", &Y); // %hhu é usado para ler unsigned char

    // Verifica se Y é maior ou igual a 5
    if (Y < 5) {
        printf("O valor de Y deve ser maior ou igual a 5.\n");
        return 1;
    }

    // Criação da máscara para 4 bits ao redor de Y (8 bits no total)
    mask = 0xFF; // Máscara de 8 bits (todos os bits 1)

    // Calcular o deslocamento para extrair os bits ao redor de Y
    unsigned char result = 0;
    unsigned char shift = (Y - 4) < 0 ? 0 : (Y - 4); // Calcular deslocamento para não sair do intervalo
    result = (X << shift) & mask; // Aplica a máscara de X

    // Resultado da modificação
    printf("Resultado da modificação: %u\n", result);

    return 0;
}
