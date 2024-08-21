/*
 0219 - v0.0. - 21 / 08 / 2023
 Author: Matheus de Almeida Moreira - 848813

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o 0219 0219.c
 Windows: gcc -o 0219 0219.c
 Para executar em terminal (janela de comandos):
 Linux : ./0219
 Windows: 0219
*/
#include <stdio.h>

void ex0219(void){
    double numero1, numero2, numero3;
        // identificacao
    printf( "\nExercicio 0219:\n\n" );
    //programa
    printf("Digite o primeiro numero: ");
    scanf("%lf", &numero1);
    printf("\nDigite o segundo numero: ");
    scanf("%lf", &numero2);
    printf("\nDigite o terceiro numero: ");
    scanf("%lf", &numero3);
    if(numero1 != numero3){
        if(numero2 > numero1 && numero2 < numero3){
            printf("O numero %.2lf esta entre os numeros: %.2lf e %.2lf", numero2,numero1,numero3);
        }else{
            printf("O numero %.2lf nao esta entre os numeros", numero2);}
    }else{
            printf("ERRO: O numero 1 deve ser diferente do numero 3 ");
            }
} // fim programa
int main(){
    ex0219();
}
