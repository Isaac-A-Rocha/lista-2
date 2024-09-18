#include <stdio.h>

int main() {
    int A, B, i, min, max;

    // Entrada dos limites da faixa
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    // Determinando o menor e maior valor entre A e B
    if (A < B) {
        min = A;
        max = B;
    } else {
        min = B;
        max = A;
    }

    printf("Quadrados dos números múltiplos de 4 entre %d e %d:\n", min, max);

    // Loop para percorrer os números entre min e max
    for (i = min; i <= max; i++) {
        if (i % 4 == 0) {
            printf("%d^2 = %d\n", i, i * i);  // Calcula o quadrado de i
        }
    }

    return 0;
}
