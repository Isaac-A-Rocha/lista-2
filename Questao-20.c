#include <stdio.h>

// Função para calcular o fatorial de um número
int fatorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    // Imprime o fatorial dos números ímpares de 1 a 10
    for (int i = 1; i <= 10; i += 2) {  // Itera sobre os números ímpares
        printf("O fatorial de %d é: %d\n", i, fatorial(i));
    }

    return 0;
}
