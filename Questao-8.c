#include <stdio.h>

void calcular_pagamento(float valor_mercadoria) {
    int valor_centavos = (int)(valor_mercadoria * 100 + 0.5); // Converte para centavos
    int prestacao = valor_centavos / 3; // Calcula a prestação
    int entrada = valor_centavos - 2 * prestacao; // Calcula a entrada

    // Converte de volta para reais
    float entrada_reais = entrada / 100.0;
    float prestacao_reais = prestacao / 100.0;

    printf("Entrada: R$ %.2f\n", entrada_reais);
    printf("Prestações: 2x de R$ %.2f\n", prestacao_reais);
}

int main() {
    float valor_mercadoria;

    printf("Digite o valor da mercadoria: R$ ");
    scanf("%f", &valor_mercadoria);

    calcular_pagamento(valor_mercadoria);

    return 0;
}
