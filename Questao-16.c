#include <stdio.h>

int main() {
    int i;
    int somatorio_div3 = 0;
    int somatorio_div5 = 0;

    // Laço único que percorre o intervalo de 0 a 200
    for (i = 0; i <= 200; i++) {
        // Somatório de números divisíveis por 3 no intervalo [0,100]
        if (i >= 0 && i <= 100 && i % 3 == 0) {
            somatorio_div3 += i;
        }
        // Somatório de números divisíveis por 5 no intervalo (100,200]
        if (i > 100 && i <= 200 && i % 5 == 0) {
            somatorio_div5 += i;
        }
    }

    // Exibe os resultados
    printf("Somatório dos números divisíveis por 3 no intervalo [0,100]: %d\n", somatorio_div3);
    printf("Somatório dos números divisíveis por 5 no intervalo (100,200]: %d\n", somatorio_div5);

    return 0;
}
