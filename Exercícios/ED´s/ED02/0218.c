/*
 0218 - v0.0. - 20 / 08 / 2023
 Author: Matheus de Almeida Moreira - 848813

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o 0218 0218.c
 Windows: gcc -o 0218 0218.c
 Para executar em terminal (janela de comandos):
 Linux : ./0218
 Windows: 0218
*/
#include <stdio.h>

void ex0218(void) {
    double numero1, numero2;
    // identificacao
    printf( "\nExercicio 0218:\n\n" );
    //programa
    printf("Digite o primeiro numero: ");
    scanf("%lf", &numero1);
    printf("\nDigite o segundo numero: ");
    scanf("%lf", &numero2);
    if (numero1 < (numero2 / 2)) {
    printf("O numero %.2lf eh menor que a metade de %.2lf", numero1, numero2);
}else if(numero1 == (numero2 / 2)){
    printf("O numero %.2lf eh a metade de %.2lf", numero1, numero2);
}else if(numero1 > (numero2 / 2)){
    printf("O numero %.2lf eh maior que a metade de %.2lf", numero1, numero2);
}
}
int main() {
    ex0218();
    return 0;
}
