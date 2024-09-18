#include <stdio.h>

int main() {
    int inicio, fim;
    int soma = 0;
    int contagem = 0;
    float media;

    // Solicita ao usuário que insira o início e o fim da faixa
    printf("Digite o início da faixa: ");
    scanf("%d", &inicio);
    printf("Digite o fim da faixa: ");
    scanf("%d", &fim);

    // Ajusta para garantir que inicio seja menor ou igual a fim
    if (inicio > fim) {
        int temp = inicio;
        inicio = fim;
        fim = temp;
    }

    // Calcula a soma e a contagem dos números na faixa
    for (int i = inicio; i <= fim; i++) {
        soma += i;
        contagem++;
    }

    // Calcula a média
    if (contagem > 0) {
        media = (float)soma / contagem;
    } else {
        media = 0;
    }

    // Exibe a média
    printf("A média aritmética dos números inteiros entre %d e %d é: %.2f\n", inicio, fim, media);

    return 0;
}
