/*
 Estudo Dirigido 06 - v0.0. - 17 / 09 / 2024
 Author: Matheus de Almeida Moreira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o ed07 ed07.c
 Windows: gcc -o ed07 ed07.c
 Para executar em terminal (janela de comandos):
 Linux : ./ed07
 Windows: ed07
*/

// dependencias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define TAM_STRING 80
// Fun��o para mostrar o menu de op��es
void menuOpcoes() {
    printf("\nEscolha alguma das opcoes a seguir:\n\n");
    printf("  0 - Encerrar programa\n");
    printf("  1 - Exercicio 0711\n");
    printf("  2 - Exercicio 0712\n");
    printf("  3 - Exercicio 0713\n");
    printf("  4 - Exercicio 0714\n");
    printf("  5 - Exercicio 0715\n");
    printf("  6 - Exercicio 0716\n");
    printf("  7 - Exercicio 0717\n");
    printf("  8 - Exercicio 0718\n");
    printf("  9 - Exercicio 0719\n");
    printf(" 10 - Exercicio 0720\n");
    printf(" 11 - Exercicio 07E1\n");
    printf(" 12 - Exercicio 07E2\n");
} // fim menuOpcoes()



// Incluir função e método (0711) para:
// ler um valor inteiro do teclado e
// gravar essa quantidade em múltiplos de 3, ímpares, em ordem crescente, começando em 3.
// Exemplo: n = 5 => { 3, 9, 15, 21, 27 }
void ex0711()
{
    // identificacao
     printf("\nExercicio 0711:\n\n");
    //programa

    // encerrar
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
} // fim exercicio0711

// Fun��o para o exerc�cio 0712
// ler um valor inteiro do teclado e
// gravar essa quantidade em múltiplos de 6, pares, em ordem decrescente encerrando em 36.
// Exemplo: n = 5 => { 60, 54, 48, 42, 36 }

void ex0712() {
    // identificacao
    printf( "\nExercicio 0712:\n\n" );
    // programa

    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
    return 0;
}// Fim da fun��o ex0712

// Fun��o para o exerc�cio 0713
// ler um valor inteiro do teclado e
// gravar essa quantidade em valores da sequência: 1 4 16 64 256 ...
// Exemplo: n = 5 => { 1, 4, 16, 64, 256 }

void ex0713() {
// identificacao
    printf( "\nExercicio 0713:\n\n" );
    // encerrar
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
    return 0;

}// Fim da fun��o ex0713

// Fun��o para o exerc�cio 0714
// ler um valor inteiro do teclado e
// gravar essa quantidade em valores decrescentes da sequência: ... 1/256 1/64 1/16 1/4 1.
// Exemplo: n = 5 => { 1/256, 1/64, 1/16, 1/4, 1 }

void ex0714() {
// identificacao
    printf( "\nExercicio 0714:\n\n" );
    getchar();
    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();

}// Fim da fun��o ex0714

// Fun��o para o exerc�cio 0715
// ler um valor inteiro do teclado (n) e outro valor real (x),
// gravar essa quantidade (n) em valores reais da sequência: 1 1/x2 1/x4 1/x6...
// DICA: Usar pow ( x, y ) da biblioteca <math.h> para calcular a potência.
// Exemplo: n = 5 => { 1, 1/x2, 1/x4, 1/x6, 1/x8}

void ex0715() {
// identificacao
    printf( "\nExercicio 0715:\n\n" );
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();

}// Fim da fun��o ex0715

// Fun��o para o exerc�cio 0716
// ler um valor inteiro do teclado para representar certa quantidade de valores
// a serem somados dentre os primeiros gravados no exercício anterior.
// Testar essa função para quantidades diferentes.
// Gravar em outro arquivo ("RESULTADO06.TXT") cada quantidade e seu resultado.

void ex0716() {
    printf("\nExercicio 0716:\n\n");
    getchar();
    printf("\nAperte ENTER para continuar!\n");
    getchar(); // Para esperar o usuário pressionar ENTER
}
// Fim da fun��o ex0716

// Fun��o para o exerc�cio 0717
// ler um valor inteiro do teclado, e até essa quantidade, um valor por vez,
// calcular a soma dos inversos das potências do exercício 04.
// Gravar em outro arquivo ("RESULTADO07.TXT") cada quantidade e seu resultado.
// Exemplo: n = 5 => { 1/256 + 1/64 + 1/16 + 1/4 + 1 }

void ex0717(){
    // identificacao
    printf("\nExercicio 0717:\n\n");
    // programa
    getchar();

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
} // fim exercicio0717

// Fun��o para o exerc�cio 0718
// ler um valor inteiro do teclado, e até atingir essa quantidade, um valor por vez,
// gravar o valor correspondente aos primeiros termos pares da série de Fibonacci.
// Gravar em outro arquivo ("RESULTADO08.TXT") cada quantidade e seu resultado.
// Exemplo: n = 5 => { 2, 8, 34, 144, 610 }

void ex0718() {
// identificacao
    printf( "\nExercicio 0718:\n\n" );

    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da fun��o ex0718
// Fun��o para o exerc�cio 0719
// para calcular a quantidade de minúsculas em cadeia de caracteres de um arquivo texto.
// Gravar em outro arquivo ("RESULTADO09.TXT") cada cadeia de caracteres e seus resultados.
// Testar essa função com cadeias de tamanhos diferentes.
// Exemplo: PaReDe de TiJoLoS AmaRElOs
void ex0719() {
    //identificação
    printf( "\nExercicio 0719:\n\n" );
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();

}// Fim da fun��o ex0619

// Fun��o para o exerc�cio 0620
// Incluir função e método (Exemplo0620) para
// calcular certo termo par da série de Fibonacci começando em 1.
// Testar essa função para quantidades diferentes.
// DICA: Separar o cálculo do termo e o teste para verificar se é par.
// Exemplo: valor = 3 => 2+8+34

void ex0720() {
// identificacao
    printf( "\nExercicio 0720:\n\n" );
    getchar();
    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da fun��o ex0620

// Fun��o para o exerc�cio 06E1
// Incluir função e método (Exemplo06E1) para
// calcular o valor da função definida abaixo,
// lidos os valores de (x) e (n) do teclado:
// f ( x, n ) = 1 + x2 + x4 + x6 + x8 + ...

//PROBLEMA: O calculo correto só é realizado dessa maneira (Solução do COPILOT)
// Solução trocar o if, antes tinha feito para o código só ser executado se a variável v2 fosse maior que a v3.

void ex07E1()
{
    // identificacao
    printf( "\nExercicio 07E1:\n\n" );

    getchar();
    printf("\nAperte ENTER para continuar!\n");
    getchar();
} // fim exercicio06E1
// Fun��o para o exerc�cio 06E2
// Incluir função e método (Exemplo06E2) para
// para calcular o valor indicado abaixo,
// lido o número de termos (n) do teclado: e = 1 + 2/3! + 5/7! + 12/15! + 27/31! + ..
void ex07E2()
{
    // identificacao
    printf( "\nExercicio 07E2:\n\n" );

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
            case 1: ex0711(); break;
            case 2: ex0712(); break;
            case 3: ex0713(); break;
            case 4: ex0714(); break;
            case 5: ex0715(); break;
            case 6: ex0716(); break;
            case 7: ex0717(); break;
            case 8: ex0718(); break;
            case 9: ex0719(); break;
            case 10: ex0720(); break;
            case 11: ex07E1(); break;
            case 12: ex07E2(); break;
            default:
                printf("\nERRO: OPCAO INVALIDA\n\n");
                break;
        } // fim switch

    } while (opcao != 0);

    printf("\nAperte ENTER para terminar!\n");
    getchar();

    return 0;
} // Fim da fun��o principal
