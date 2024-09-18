#include <stdio.h>

int main() {
    int n_terms; // Número de termos para calcular a aproximação
    double pi_approx; // Aproximação de pi
    double sign = 1.0; // Sinal alternado (1 para positivo e -1 para negativo)
    double denominator; // Denominador da fração

    // Número de termos que desejamos calcular
    printf("Digite o número de termos para calcular a aproximação de pi: ");
    scanf("%d", &n_terms);

    printf("Número de Termos | Aproximação de Pi\n");
    printf("------------------|-------------------\n");

    pi_approx = 0.0; // Inicializa a aproximação de pi

    for (int i = 1; i <= n_terms; i++) {
        denominator = 2.0 * i - 1; // Calcula o denominador da fração
        pi_approx += sign * (4.0 / denominator); // Adiciona a fração à aproximação
        sign = -sign; // Alterna o sinal

        // Imprime o resultado após cada termo
        printf("%16d | %17.15f\n", i, pi_approx);
    }

    return 0;
}
