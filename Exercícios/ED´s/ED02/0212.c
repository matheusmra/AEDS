/*
 0212 - v0.0. - 20 / 08 / 2023
 Author: Matheus de Almeida Moreira - 848813

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o 0212 0212.c
 Windows: gcc -o 0212 0212.c
 Para executar em terminal (janela de comandos):
 Linux : ./0212
 Windows: 0212
*/
#include<stdio.h>
void ex0212(void) {
    int numero = 0;
    // identificacao
    printf( "\nExercicio 0212:\n\n" );
    //programa
    printf("Digite o numero:");
    scanf("%d", &numero);
    if( numero % 2 == 0 ) // par
    {
        if( numero > 15 )
        {
            printf( "O numero %d e par e maior que 15\n" , numero );
        }
        else
        {
            printf( "O numero %d e par e menor que 15 \n" , numero );
        }
    }

    if( numero % 2 != 0 ) // impar
    {
        if( numero < -15 )
        {
            printf( "O numero %d e impar e menor que -15\n" , numero );
        }
        else
        {
            printf( "O numero %d e impar e maior que -15\n" , numero );
        }
    }

    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
} // fim exercicio0212

int main(){
    ex0212();
}
