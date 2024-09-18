#include <stdio.h>

void fibonacci(int termos) {
    int a = 1, b = 1, proximo;
    
    printf("Série de Fibonacci até o %dº termo:\n", termos);
    printf("%d, %d", a, b);  // Exibe os dois primeiros termos da série
    
    for (int i = 3; i <= termos; i++) {
        proximo = a + b;
        printf(", %d", proximo);
        a = b;
        b = proximo;
    }
    printf("\n");
}

int main() {
    int termos = 20; // Número de termos que queremos gerar
    fibonacci(termos);
    return 0;
}
