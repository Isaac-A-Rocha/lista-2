#include <stdio.h>

int main() {
    int num, d1, d2, d3, d4, d5;

    // Solicita ao usuário que insira um número de cinco dígitos
    printf("Digite um número inteiro de cinco dígitos: ");
    scanf("%d", &num);

    // Verifica se o número tem exatamente cinco dígitos
    if (num < 10000 || num > 99999) {
        printf("O número deve ter exatamente cinco dígitos.\n");
        return 1;
    }

    // Extrai os dígitos individuais
    d1 = num / 10000;            // Dígito das unidades de milhar
    d2 = (num / 1000) % 10;      // Dígito das centenas
    d3 = (num / 100) % 10;       // Dígito das dezenas
    d4 = (num / 10) % 10;        // Dígito das unidades
    d5 = num % 10;               // Dígito da unidade

    // Verifica se o número é um palíndromo
    if (d1 == d5 && d2 == d4) {
        printf("O número %d é um palíndromo.\n", num);
    } else {
        printf("O número %d não é um palíndromo.\n", num);
    }

    return 0;
}
