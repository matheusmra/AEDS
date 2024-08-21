/*
 0216 - v0.0. - 20 / 08 / 2023
 Author: Matheus de Almeida Moreira - 848813

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o 0216 0216.c
 Windows: gcc -o 0216 0216.c
 Para executar em terminal (janela de comandos):
 Linux : ./0216
 Windows: 0216
*/
#include <stdio.h>

void ex0216(void) {
    int numero1 = 0, numero2 = 0;
    // identificacao
    printf( "\nExercicio 0216:\n\n" );
    //programa
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &numero2);
    if (numero1 % 2 == 0 && numero2 % 2 != 0) {
    printf("O primeiro numero: %d eh par e o Segundo numero: %d eh impar.", numero1, numero2);
}   if(numero1 % 2 != 0 && numero2 % 2 != 0){
    printf("Os dois numeros sao impares");
    }if(numero1 %2 != 0 && numero2 % 2 == 0){
    printf("O primeiro numero eh impar e o segundo eh par");
    }if(numero1 % 2 == 0 && numero2 % 2 == 0){
    printf("Os dois numeros sao pares");
    }
}
int main() {
    ex0216();
    return 0;
}
