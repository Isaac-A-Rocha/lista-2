#include <stdio.h>
//Notei que existe um erro em valores grandes.

int main(){
    int n, i = 1;
    float fat;
    printf("Digite o valor que deseja encontrar o fatorial: \n");
    scanf("%d", &n);
    fat = 1;

    do{
        fat = fat * i;
        i++;
    }while(i <= n);
    printf("O fatorial de %d é: %4.f\n", n, fat);
    
    return 0;
    
}