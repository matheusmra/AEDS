/*
 0217 - v0.0. - 20 / 08 / 2023
 Author: Matheus de Almeida Moreira - 848813

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o 0217 0217.c
 Windows: gcc -o 0217 0217.c
 Para executar em terminal (janela de comandos):
 Linux : ./0217
 Windows: 0217
*/
#include <stdio.h>

void ex0217(void){
    int numero1 = 0, numero2 = 0;
    // identificacao
    printf( "\nExercicio 0217:\n\n" );
    //programa
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &numero2);
    if (numero1 % 2 != 0 && numero1 < 0 && numero2 % 2 == 0 && numero2 > 0) {
    printf("O primeiro numero: %d eh impar e negativo e o Segundo numero: %d eh par e positivo.", numero1, numero2);
}   if(numero1 % 2 != 0 && numero1 < 0 && numero2 % 2 != 0 && numero2 < 0 ){
    printf("Ambos sao impares e negativos");
}   if(numero1 % 2 == 0 && numero1 < 0 && numero2 % 2 != 0 && numero2 > 0){
    printf("O primeiro numero eh par e negativo. O segundo eh impar e positivo");
    }if(numero1 % 2 == 0 && numero1 > 0 && numero2 % 2 == 0 && numero2 > 0){
    printf("Ambos sao pares e positivos");
    }if(numero1 %2 != 0 && numero1 < 0 && numero2 %2 == 0 && numero2 < 0){
    printf("O primeiro numero eh negativo e impar. O segundo eh par e negativo");
    }
}
int main() {
    ex0217();
    return 0;
}
