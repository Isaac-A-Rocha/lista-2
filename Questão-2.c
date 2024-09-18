#include <stdio.h>  

char* obterNomeDia(int numero) {  
    switch(numero) {  
        case 1:  
            return "domingo";  
        case 2:  
            return "segunda";  
        case 3:  
            return "terça";  
        case 4:  
            return "quarta";  
        case 5:  
            return "quinta";  
        case 6:  
            return "sexta";  
        case 7:  
            return "sábado";  
        default:  
            return "Número de dia não válido";  
    }  
}  

int main() {  
    int numero;  
    
    do {  
        printf("Digite um número (1-7) para obter o nome do dia da semana ou 0 para sair: ");  
        scanf("%d", &numero);  
        
        if (numero == 0) {  
            printf("Saindo...\n");
            break;  
        } else {  
            char* nomeDia = obterNomeDia(numero);  
            printf("O dia é %s\n", nomeDia);  
        }  
    } while(1);  

    // Teste  
    for (int i = 1; i <= 7; i++) {  
        char* nomeDia = obterNomeDia(i);  
        printf("Número %d corresponde a %s\n", i, nomeDia);  
    }  
    
    return 0;  
}