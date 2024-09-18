//Implementar um programa para resolver o seguinte problema: José tem 150 centı́metros e cresce 2
//centı́metros por ano. O Pedro tem 110 centı́metros e cresce 3 centı́metros por ano. Em quantos anos
//Pedro será maior que José?
#include <stdio.h>  

int main() {  
    int jose = 150, crescimento_jose = 2, pedro = 110, crescimento_pedro = 3, anos = 0;    
     
    //Sacada foi fazer um valor que soma no laço e descobrir a idade.
    while (pedro <= jose) {  
        jose += crescimento_jose;  
        pedro += crescimento_pedro;  
        anos++;  
    }  
    
    printf("Pedro será maior que José em %d anos.\n", anos);  
    
    return 0;  
}