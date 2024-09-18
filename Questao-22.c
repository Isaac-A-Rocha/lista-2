#include <stdio.h>

int main() {
    int num, count = 0;
    
    // Solicita ao usuário que insira um número inteiro
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    // Armazena o número original para mostrar após a contagem
    int original_num = num;
    
    // Usa o valor absoluto do número para lidar com números negativos
    num = (num < 0) ? -num : num;
    
    // Conta quantos dígitos 7 existem
    while (num > 0) {
        // Verifica o último dígito do número
        if (num % 10 == 7) {
            count++;
        }
        // Remove o último dígito
        num /= 10;
    }
    
    // Exibe o resultado
    printf("O número %d tem %d dígitos 7.\n", original_num, count);
    
    return 0;
}
