/*
 0213 - v0.0. - 20 / 08 / 2023
 Author: Matheus de Almeida Moreira - 848813

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o 0213 0213.c
 Windows: gcc -o 0213 0213.c
 Para executar em terminal (janela de comandos):
 Linux : ./0213
 Windows: 0213
*/
#include<stdio.h>
void ex0213(void) {
    int numero = 0;
    // identificacao
    printf( "\nExercicio 0213:\n\n" );
    //programa
    scanf("%d", &numero);
    if (numero > 25 && numero < 45) {
        printf("%d faz parte do intervalo de 25 e 45.", numero);
    }else{
        printf("%d nao faz parte do intervalo.", numero);}
}
int main(){
    ex0213();
}
