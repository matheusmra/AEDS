/*
 Estudo Dirigido 05 - v0.0. - 12 / 09 / 2024
 Author: Matheus de Almeida Moreira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o ed05 ed05.c
 Windows: gcc -o ed05 ed05.c
 Para executar em terminal (janela de comandos):
 Linux : ./ed05
 Windows: ed05
*/

// dependencias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
// Fun��o para mostrar o menu de op��es
void menuOpcoes() {
    printf("\nEscolha alguma das opcoes a seguir:\n\n");
    printf("  0 - Encerrar programa\n");
    printf("  1 - Exercicio 0511\n");
    printf("  2 - Exercicio 0512\n");
    printf("  3 - Exercicio 0513\n");
    printf("  4 - Exercicio 0514\n");
    printf("  5 - Exercicio 0515\n");
    printf("  6 - Exercicio 0516\n");
    printf("  7 - Exercicio 0517\n");
    printf("  8 - Exercicio 0518\n");
    printf("  9 - Exercicio 0519\n");
    printf(" 10 - Exercicio 0520\n");
    printf(" 11 - Exercicio 05E1\n");
    printf(" 12 - Exercicio 05E2\n");
} // fim menuOpcoes()



// Incluir função e método (0511) para:
// para ler uma quantidade inteira (n) do teclado e, mediante um procedimento,
// testar a função para gerar valores múltiplos de 4 em ordem crescente.

void ex0511()
{
    // identificacao
     printf("\nExercicio 0511:\n\n");

    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
} // fim exercicio0511

// Fun��o para o exerc�cio 0512
// Incluir função e método (0512) para:
// para ler uma quantidade inteira do teclado e, mediante um procedimento,
// testar a função para gerar valores múltiplos de 3 e 4 em ordem crescente.
void ex0512() {
    // identificacao
    printf( "\nExercicio 0512:\n\n" );

    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
    return 0;
}// Fim da fun��o ex0512

// Fun��o para o exerc�cio 0513
//  Incluir função e método (0513) para:
//  para ler uma quantidade inteira do teclado e, mediante um procedimento,
//  testar a função para gerar potências de 3 em ordem decrescente.
void ex0513() {
// identificacao
    printf( "\nExercicio 0513:\n\n" );
    // vari�veis
    char cadeia[80];
    // programa
    printf( "Digite uma palavra: " );
    scanf( "%s" , cadeia);
    getchar();
    printf( "\n" );
    contarm(cadeia);
    // Testar se o caractere � minusculo e menor que m
    printarmenorm(cadeia);
    printf("O total de letras minusculas menores que 'm' eh: %d ", contarm(cadeia));
    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
    return 0;

}// Fim da fun��o ex0413

// Fun��o para o exerc�cio 0414
// Incluir função e método (0514) para:
// para ler uma quantidade inteira do teclado e, mediante um procedimento,
// testar a função para gerar valores crescentes nos denominadores
// (sequência dos inversos) múltiplos de 4.
void ex0514() {
// identificacao
    printf( "\nExercicio 0514:\n\n" );
    // vari�veis
    char cadeia[80], cadeia2[80];
    // programa
    printf( "Digite uma palavra: " );
    scanf( "%s" , cadeia);
    getchar();
    printf( "\n" );
    separarDigitos(cadeia, cadeia2);
    printf("Digitos separados: %s\n", cadeia2);
    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();

}// Fim da fun��o ex0414

// Fun��o para o exerc�cio 0415
// Incluir função e método (0515) para:
// para ler um valor real real (x) do teclado;
// para ler uma quantidade inteira do teclado e, mediante um procedimento,
// testar a função para gerar valores ímpares crescentes nos denominadores
// da sequência: 1 1/x1 1/x3 1/x5 ...
// DICA: Usar da biblioteca <math.h> a função pow ( x, y ) para calcular a potência
void ex0515() {
// identificacao
    printf( "\nExercicio 0515:\n\n" );
    // variavel
    char cadeia[80];
    // programa
    printf( "Digite uma palavra: " );
    scanf( "%s" , cadeia);
    getchar();
    printf( "\n" );
    contarM(cadeia);
    contarm(cadeia);
    printarmenorm(cadeia);
    printarmenorM(cadeia);
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();

}// Fim da fun��o ex0415

// Fun��o para o exerc�cio 0416
// Incluir função e método (0516) para
// calcular a soma dos primeiros valores positivos começando no valor 4,
// múltiplos de 4 e não múltiplos de 5.
// Testar essa função para quantidades diferentes e mostrar os resultados em outro método.
// Exemplo: n = 5 => 4 + 8 + 12 + 16 + 24


void ex0516() {
// identificacao
    printf( "\nExercicio 0516:\n\n" );
    // variavel
    char cadeia[80];
    // programa
    printf( "Digite uma palavra: " );
    scanf( "%s" , cadeia);
    getchar();
    printf( "\n" );
    contarmaiorM(cadeia);
    contarmaiorm(cadeia);
    printarmaiorm(cadeia);
    printarmaiorM(cadeia);
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();

}// Fim da fun��o ex0416

// Fun��o para o exerc�cio 0417
// Incluir função e método (0517) para
// calcular a soma dos inversos (1/x) dos primeiros valores positivos,
// começando no valor 3, múltiplos de 3 e não múltiplos de 5.
// Testar essa função para quantidades diferentes e
// mostrar os resultados em outro método.
// Exemplo: n = 5 => 1/3 + 1/6 + 1/9 + 1/12 + 1/18
void ex0517(void) {
// identificacao
    printf( "\nExercicio 0517:\n\n" );
    // variavel
    char cadeia[80];
    // programa
    printf( "Digite uma palavra: " );
    scanf( "%s" , cadeia);
    getchar();
    printf( "\n" );
    impar(cadeia);
    printf("O total de numeros impares na cadeia eh: %d", impar(cadeia));
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();

}// Fim da fun��o ex0417
// Fun��o para o exerc�cio 0518
// Incluir função e método (0518) para
// calcular a soma da adição dos primeiros números naturais começando no valor 4.
// Testar essa função para quantidades diferentes de valores e
// mostrar os resultados em outro método.
// Exemplo: n = 5 => 4 + 5 + 7 + 10 + 14
void ex0518() {
// identificacao
    printf( "\nExercicio 0518:\n\n" );
    // variavel
    char cadeia[80];
    // programa
    printf( "Digite uma palavra: " );
    scanf( "%s" , cadeia);
    getchar();
    printf( "\n" );
    verchar(cadeia);
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da fun��o ex0418

// Fun��o para o exerc�cio 0519
// Incluir função e método (0519) para
// calcular a soma dos quadrados da adição dos números naturais começando no valor 4.
// Testar essa função para quantidades diferentes de valores e
// e mostrar os resultados em outro método.
// Exemplo: n = 5 => 16 + 25 + 36 + 49 + 64
void ex0519() {
    // identificacao
    printf( "\nExercicio 0519:\n\n" );
  // variavel
    char cadeia[80];
    // programa
    printf( "Digite uma palavra: " );
    scanf( "%s" , cadeia);
    getchar();
    printf( "\n" );
    alfanum(cadeia);
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();

}// Fim da fun��o ex0419

// Fun��o para o exerc�cio 0420
// Incluir função e método (Exemplo0520) para
// calcular a soma dos inversos (1/x) das adições de números naturais terminando no valor 4.
// Testar essa função para quantidades diferentes de valores
// e mostrar os resultados em outro método.
// Exemplo: n = 5 => 1/14 + 1/10 + 1/7 + 1/5 + 1/4

void ex0520() {
// identificacao
    printf( "\nExercicio 0520:\n\n" );


}// Fim da fun��o ex0420

// Fun��o para o exerc�cio 04E1
// Incluir função e método (Exemplo05E1) para
// ler um número inteiro do teclado (n) e,
// mediante o uso da função, calcular e mostrar o fatorial desse valor em outro método:
// n! = n * (n-1) * (n-2) * ... * 3 * 2 * 1 se n>0

void ex05E1()
{
    // identificacao
    printf( "\nExercicio 04E1:\n\n" );

} // fim exercicio04E1
// Fun��o para o exerc�cio 04E2
// Incluir função e método (Exemplo05E2) para
// ler uma quantidade inteira do teclado (n) e,
// mediante o uso da função, calcular e mostrar o resultado em outro método de
// f ( n ) = (1+3/2!) * (1+5/4!) * (1+7/8!) * 
void ex05E2()
{
    // identificacao
    printf( "\nExercicio 04E2:\n\n" );
 // variavel
    char cadeia1[80], cadeia2[80];
    // programa
    printf( "Digite a primeira cadeia: " );
    scanf( "%s" , cadeia1);
    getchar();
    printf( "\n" );
    printf( "Digite a segunda cadeia: " );
    scanf( "%s" , cadeia2);
    getchar();
    metodo04E2(cadeia1, cadeia2);
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
} // fim fun��o 04E2

// Fun��o principal
int main(void) {
    int opcao;

    do {
        menuOpcoes(); // Chama a fun��o que exibe as op��es

        printf("\nOpcao = ");
        scanf("%d", &opcao);
        getchar(); // Limpar o buffer de entrada

        // Executar a op��o escolhida
        switch (opcao) {
            case 0: break;
            case 1: ex0511(); break;
            case 2: ex0512(); break;
            case 3: ex0513(); break;
            case 4: ex0514(); break;
            case 5: ex0515(); break;
            case 6: ex0516(); break;
            case 7: ex0517(); break;
            case 8: ex0518(); break;
            case 9: ex0519(); break;
            case 10: ex0520(); break;
            case 11: ex05E1(); break;
            case 12: ex05E2(); break;
            default:
                printf("\nERRO: OPCAO INVALIDA\n\n");
                break;
        } // fim switch

    } while (opcao != 0);

    printf("\nAperte ENTER para terminar!\n");
    getchar();

    return 0;
} // Fim da fun��o principal
