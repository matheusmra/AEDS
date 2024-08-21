/*
 0215 - v0.0. - 20 / 08 / 2023
 Author: Matheus de Almeida Moreira - 848813

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o 0215 0215.c
 Windows: gcc -o 0215 0215.c
 Para executar em terminal (janela de comandos):
 Linux : ./0215
 Windows: 0215
*/
#include <stdio.h>

void ex0215(void) {
    int numero = 0;
    // identificacao
    printf( "\nExercicio 0215:\n\n" );
    //programa
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    if ((numero >= 10 && numero <= 25) && (numero > 15 && numero < 50))) {
        printf("%d faz parte da intersecao.\n", numero);
    } else if (numero >= 10 && numero <= 25) {
        printf("%d faz parte do intervalo de 10 e 25.\n", numero);
    } else if (numero > 15 && numero < 50) {
        printf("%d faz parte do intervalo de 15 e 50.\n", numero);
    }
}

int main() {
    ex0215();
    return 0;
}

