#include <stdio.h>

int main() {
    int cateto1, cateto2, hipotenusa;

    printf("Triplas de Pitágoras com lados não superiores a 500:\n");
    // Itera sobre todos os possíveis valores para cateto1
    for (cateto1 = 1; cateto1 <= 500; cateto1++) {
        // Itera sobre todos os possíveis valores para cateto2
        for (cateto2 = cateto1; cateto2 <= 500; cateto2++) {
            // Itera sobre todos os possíveis valores para hipotenusa
            for (hipotenusa = cateto2; hipotenusa <= 500; hipotenusa++) {
                // Verifica se a tríplice é uma tríplice de Pitágoras
                if (cateto1 * cateto1 + cateto2 * cateto2 == hipotenusa * hipotenusa) {
                    printf("Cateto1: %d, Cateto2: %d, Hipotenusa: %d\n", cateto1, cateto2, hipotenusa);
                }
            }
        }
    }

    return 0;
}
