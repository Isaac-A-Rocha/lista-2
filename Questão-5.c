//Fazer um programa que receba um valor n no teclado e determine o maior e o menor termo fornecido.
//A condição de termino do programa é quando o usuário digitar zero.
#include <stdio.h>  

int main() {  
    int n, maior, menor;  

     
    printf("Digite um valor (ou 0 para sair):\n ");  
    scanf("%d", &n);  
 
    maior = n;  
    menor = n;  
 
    while (n != 0) {  //Usar o n para comparar, pois o mesmo recebe o valor informado
        if (n > maior) {  
            maior = n;  
        }  

        if (n < menor && n != 0) {  
            menor = n;  
        }  

        // Solicitar o próximo valor do usuário  
        printf("Digite um valor (ou 0 para sair):\n");  
        scanf("%d", &n);  
    }  

    // Exibir o maior e o menor valor fornecido  
    printf("O maior valor fornecido foi: %d\n", maior);  
    printf("O menor valor fornecido foi: %d\n", menor);  

    return 0;  
}