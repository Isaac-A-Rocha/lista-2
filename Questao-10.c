#include <stdio.h>

int main() {
    int i;

    printf("Quadrados dos números múltiplos de 4 entre 15 e 90:\n");

    // Loop para percorrer os números de 15 a 90
    for (i = 16; i <= 90; i++) {
        if (i % 4 == 0) {
            printf("%d^2 = %d\n", i, i * i);  // Calcula o quadrado de i
        }
    }

    return 0;
}
