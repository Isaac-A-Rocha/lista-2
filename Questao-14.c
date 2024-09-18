#include <stdio.h>

int main() {
    int A, B, i, soma = 0;

    // Solicita ao usuário os limites da faixa A e B
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    // Verifica se A é maior que B e faz a troca se necessário
    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }

    // Calcula o somatório dos números pares na faixa
    for (i = A; i <= B; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }

    // Exibe o resultado
    printf("O somatório dos números pares entre %d e %d é: %d\n", A, B, soma);

    return 0;
}
