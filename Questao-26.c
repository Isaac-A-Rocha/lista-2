#include <stdio.h>

// Função para converter e imprimir o número em binário
void print_binary(int num) {
    int i;
    int binary[8 * sizeof(int)];
    int index = 0;

    // Preenche o array com os bits do número
    for (i = 0; i < 8 * sizeof(int); i++) {
        binary[i] = (num >> (8 * sizeof(int) - i - 1)) & 1;
    }

    // Imprime o número binário
    for (i = 0; i < 8 * sizeof(int); i++) {
        if (binary[i] == 1 || index > 0) { // Evita imprimir zeros à esquerda
            printf("%d", binary[i]);
            index = 1;
        }
    }
    if (index == 0) { // Caso especial para 0
        printf("0");
    }
}

int main() {
    printf("Decimal | Binário             | Octal  | Hexadecimal\n");
    printf("--------|---------------------|--------|--------------\n");

    // Imprime a tabela para os números de 1 a 256
    for (int i = 1; i <= 256; i++) {
        printf("%-8d| ", i);                  // Imprime o número decimal
        print_binary(i);                     // Imprime o número binário
        printf(" | %o     | %X\n", i, i);     // Imprime os números octal e hexadecimal
    }

    return 0;
}
