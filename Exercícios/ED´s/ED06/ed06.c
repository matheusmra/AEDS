/*
 Estudo Dirigido 06 - v0.0. - 17 / 09 / 2024
 Author: Matheus de Almeida Moreira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o ed06 ed06.c
 Windows: gcc -o ed06 ed06.c
 Para executar em terminal (janela de comandos):
 Linux : ./ed06
 Windows: ed06
*/

// dependencias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
// Fun��o para mostrar o menu de op��es
void menuOpcoes() {
    printf("\nEscolha alguma das opcoes a seguir:\n\n");
    printf("  0 - Encerrar programa\n");
    printf("  1 - Exercicio 0611\n");
    printf("  2 - Exercicio 0612\n");
    printf("  3 - Exercicio 0613\n");
    printf("  4 - Exercicio 0614\n");
    printf("  5 - Exercicio 0615\n");
    printf("  6 - Exercicio 0616\n");
    printf("  7 - Exercicio 0617\n");
    printf("  8 - Exercicio 0618\n");
    printf("  9 - Exercicio 0619\n");
    printf(" 10 - Exercicio 0620\n");
    printf(" 11 - Exercicio 06E1\n");
    printf(" 12 - Exercicio 06E2\n");
} // fim menuOpcoes()



// Incluir função e método (0511) para:
// para ler uma quantidade inteira (n) do teclado e, mediante um procedimento,
// testar a função para gerar valores múltiplos de 4 em ordem crescente.
void fun0611(int v1, int v2){
    if(v2 <= v1){
        printf("%d", v2);
        fun0611(v1, v2+4);

    }


}
void ex0611()
{
    // identificacao
     printf("\nExercicio 0611:\n\n");
    //programa
    int n = 0;
    printf("\nDigite o numero de termos:");
    scanf("%d", &n);
    fun0611(n, 4);
    // encerrar
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
} // fim exercicio0511

// Fun��o para o exerc�cio 0512
// Incluir função e método (0512) para:
// para ler uma quantidade inteira do teclado e, mediante um procedimento,
// testar a função para gerar valores múltiplos de 3 e 4 em ordem crescente.

void ex0612() {
    // identificacao
    printf( "\nExercicio 0612:\n\n" );
    // programa
    int n = 0;
    printf("\nDigite o numero de termos:");
    scanf("%d", &n);
    fun0512(n);
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
    return 0;
}// Fim da fun��o ex0512

// Fun��o para o exerc�cio 0513
//  Incluir função e método (0513) para:
//  para ler uma quantidade inteira do teclado e, mediante um procedimento,
//  testar a função para gerar potências de 3 em ordem decrescente.

void ex0613() {
// identificacao
    printf( "\nExercicio 0613:\n\n" );
    // encerrar
    int n = 0;
    printf("Digite o numero de termos:");
    scanf("%d", &n);
    fun0513(n);
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
    return 0;

}// Fim da fun��o ex0413

// Fun��o para o exerc�cio 0514
// Incluir função e método (0514) para:
// para ler uma quantidade inteira do teclado e, mediante um procedimento,
// testar a função para gerar valores crescentes nos denominadores
// (sequência dos inversos) múltiplos de 4.

void ex0614() {
// identificacao
    printf( "\nExercicio 0614:\n\n" );
    int n = 0;
    printf("Digite o numero de termos:");
    scanf("%d",&n);
    fun0514(n);
    getchar();
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

void ex0615() {
// identificacao
    printf( "\nExercicio 0615:\n\n" );

    printf( "\nAperte ENTER para continuar!\n" );
    getchar();

}// Fim da fun��o ex0415

// Fun��o para o exerc�cio 0416
// Incluir função e método (0516) para
// calcular a soma dos primeiros valores positivos começando no valor 4,
// múltiplos de 4 e não múltiplos de 5.
// Testar essa função para quantidades diferentes e mostrar os resultados em outro método.
// Exemplo: n = 5 => 4 + 8 + 12 + 16 + 24


void ex0616() {
    printf("\nExercicio 0616:\n\n");
    int n = 0;
    printf("Digite o numero de termos: ");
    scanf("%d", &n);
    printf("\nA soma dos multiplos de 4 que nao sao multiplos de 5: %d\n", fun0516(n));
    getchar();
    printf("\nAperte ENTER para continuar!\n");
    getchar(); // Para esperar o usuário pressionar ENTER
}
// Fim da fun��o ex0416

// Fun��o para o exerc�cio 0417
// Incluir função e método (0517) para
// calcular a soma dos inversos (1/x) dos primeiros valores positivos,
// começando no valor 3, múltiplos de 3 e não múltiplos de 5.
// Testar essa função para quantidades diferentes e
// mostrar os resultados em outro método.
// Exemplo: n = 5 => 1/3 + 1/6 + 1/9 + 1/12 + 1/18


void ex0617()
{
    // identificacao
    printf("\nExercicio 0617:\n\n");

    // programa
    int n = 0;
    printf( "\nDigite uma quantidade: " );
    scanf("%d", &n);

    printf( "\n%s%lf\n", "Soma = ", met0517(n) );

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
} // fim exercicio0517// Fim da fun��o ex0417
// Fun��o para o exerc�cio 0518
// Incluir função e método (0518) para
// calcular a soma da adição dos primeiros números naturais começando no valor 4.
// Testar essa função para quantidades diferentes de valores e
// mostrar os resultados em outro método.
// Exemplo: n = 5 => 4 + 5 + 7 + 10 + 14

void ex0618() {
// identificacao
    printf( "\nExercicio 0518:\n\n" );
    int n = 0;
    printf("\nDigite um numero:");
    scanf("%d", &n);
    printf("\nA soma eh igual a: %d", met0518(n));
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da fun��o ex0418

// Fun��o para o exerc�cio 0519
// Incluir função e método (0519) para
// calcular a soma dos quadrados da adição dos números naturais começando no valor 4.
// Testar essa função para quantidades diferentes de valores e
// e mostrar os resultados em outro método.
// Exemplo: n = 5 => 16 + 25 + 36 + 49 + 64

void ex0619() {
    // identificacao
    printf( "\nExercicio 0519:\n\n" );
    int n = 0;
    printf("\nDigite um numero:");
    scanf("%d", &n);
    printf("\nA soma eh igual a: %d", met0519(n));
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();

}// Fim da fun��o ex0419

// Fun��o para o exerc�cio 0420
// Incluir função e método (Exemplo0520) para
// calcular a soma dos inversos (1/x) das adições de números naturais terminando no valor 4.
// Testar essa função para quantidades diferentes de valores
// e mostrar os resultados em outro método.
// Exemplo: n = 5 => 1/14 + 1/10 + 1/7 + 1/5 + 1/4


void ex0620() {
// identificacao
    printf( "\nExercicio 0520:\n\n" );
    int n = 0;
    printf("Digite o numero de termos:");
    scanf("%d",&n);
    printf("\nSoma igual a: %d", fun0520(n));
    getchar();
    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da fun��o ex0420

// Fun��o para o exerc�cio 04E1
// Incluir função e método (Exemplo05E1) para
// ler um número inteiro do teclado (n) e,
// mediante o uso da função, calcular e mostrar o fatorial desse valor em outro método:
// n! = n * (n-1) * (n-2) * ... * 3 * 2 * 1 se n>0

void ex06E1()
{
    // identificacao
    printf( "\nExercicio 04E1:\n\n" );
    // programa

    getchar();
    printf("\nAperte ENTER para continuar!\n");
    getchar();
} // fim exercicio04E1
// Fun��o para o exerc�cio 04E2
// Incluir função e método (Exemplo05E2) para
// ler uma quantidade inteira do teclado (n) e,
// mediante o uso da função, calcular e mostrar o resultado em outro método de
// f ( n ) = (1+3/2!) * (1+5/4!) * (1+7/8!) *
void ex06E2()
{
    // identificacao
    printf( "\nExercicio 04E2:\n\n" );

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
            case 1: ex0611(); break;
            case 2: ex0612(); break;
            case 3: ex0613(); break;
            case 4: ex0614(); break;
            case 5: ex0615(); break;
            case 6: ex0616(); break;
            case 7: ex0617(); break;
            case 8: ex0618(); break;
            case 9: ex0619(); break;
            case 10: ex0620(); break;
            case 11: ex06E1(); break;
            case 12: ex06E2(); break;
            default:
                printf("\nERRO: OPCAO INVALIDA\n\n");
                break;
        } // fim switch

    } while (opcao != 0);

    printf("\nAperte ENTER para terminar!\n");
    getchar();

    return 0;
} // Fim da fun��o principal
