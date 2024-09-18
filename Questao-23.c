#include <stdio.h>

int main() {
    int a = 5;
    int b = 5;
    int result;

    // Usando o pré-incremento
    result = ++a;
    printf("Após pré-incremento:\n");
    printf("Valor de a: %d\n", a);       // a foi incrementado para 6
    printf("Resultado do pré-incremento: %d\n", result); // resultado é 6
    
    // Usando o pós-incremento
    result = b++;
    printf("\nApós pós-incremento:\n");
    printf("Valor de b: %d\n", b);       // b foi incrementado para 6
    printf("Resultado do pós-incremento: %d\n", result); // resultado é 5

    return 0;
}
