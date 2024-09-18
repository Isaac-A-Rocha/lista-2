#include <stdio.h>

int main() {
    int i;
    unsigned long long grãos = 0; // Usando unsigned long long para suportar números grandes
    unsigned long long grãos_no_quadro = 1; // Grãos no primeiro quadro (1 grão)

    // Loop para calcular o número total de grãos
    for (i = 1; i <= 64; i++) {
        // Adiciona os grãos do quadro atual ao total
        grãos += grãos_no_quadro;

        // Dobrar o número de grãos para o próximo quadro
        grãos_no_quadro *= 2;
    }

    // Exibe o total de grãos
    printf("O somatório do número de grãos de trigo em um tabuleiro de xadrez é: %llu\n", grãos);

    return 0;
}
