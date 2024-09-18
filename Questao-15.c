#include <stdio.h>
#include <math.h>

int main() {
    int base = 3;
    int expoente;

    // Calcula e exibe as potências de 3, de expoente 0 a 7
    for (expoente = 0; expoente <= 7; expoente++) {
        printf("3^%d = %.0f\n", expoente, pow(base, expoente));
    }

    return 0;
}
