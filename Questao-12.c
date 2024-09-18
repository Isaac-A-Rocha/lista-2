#include <stdio.h>

int main() {
    int num, i;

    // Solicita ao usuário o número para a tabuada
    printf("Digite um número inteiro para ver a tabuada: ");
    scanf("%d", &num);

    printf("Tabuada de %d:\n", num);

    // Loop para calcular e exibir a tabuada
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
