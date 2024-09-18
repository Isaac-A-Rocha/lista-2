#include <stdio.h>

int main() {
    int celsius;
    float fahrenheit;

    // Cabeçalho
    printf("Celsius\tFahrenheit\n");
    printf("--------------------\n");

    // Loop para converter de 10°C a 100°C
    for (celsius = 10; celsius <= 100; celsius += 10) {
        // Fórmula de conversão
        fahrenheit = (9.0 / 5.0) * celsius + 32;

        // Exibe os valores
        printf("%d\t%.2f\n", celsius, fahrenheit);
    }

    return 0;
}
