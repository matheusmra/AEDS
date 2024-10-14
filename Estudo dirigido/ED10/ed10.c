/*
 Estudo Dirigido 10 - v0.0. - 14 / 10 / 2024
 Author: Matheus de Almeida Moreira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o ed10 ed10.c
 Windows: gcc -o ed10 ed10.c
 Para executar em terminal (janela de comandos):
 Linux : ./ed10
 Windows: ed10
*/

// dependencias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
// Tamanho max string
const int TAM_STR = 80;
// Função para mostrar o menu de opções
void menuOpcoes() {
    printf("\nEscolha alguma das opcoes a seguir:\n\n");
    printf("  0 - Encerrar programa\n");
    printf("  1 - Exercicio 1011\n");
    printf("  2 - Exercicio 1012\n");
    printf("  3 - Exercicio 1013\n");
    printf("  4 - Exercicio 1014\n");
    printf("  5 - Exercicio 1015\n");
    printf("  6 - Exercicio 1016\n");
    printf("  7 - Exercicio 1017\n");
    printf("  8 - Exercicio 1018\n");
    printf("  9 - Exercicio 1019\n");
    printf(" 10 - Exercicio 1020\n");
    printf(" 11 - Exercicio 10E1\n");
    printf(" 12 - Exercicio 10E2\n");
} // fim menuOpcoes()

// Função para o exercício 1011
// gerar um valor inteiro aleatoriamente dentro de um intervalo,
// cujos limites de início e de fim serão recebidos como parâmetros.
// Para para testar, ler os limites do intervalo do teclado;
// ler a quantidade de elementos ( N ) a serem gerados;
// gerar essa quantidade ( N ) de valores aleatórios
// dentro do intervalo e armazená-los em arranjo;
// gravá-los, um por linha, em um arquivo ("DADOS.TXT").
// A primeira linha do arquivo deverá informar a quantidade
/ de números aleatórios ( N ) que serão gravados em seguida.
// DICA: Usar a função rand( ), mas tentar limitar valores muito grandes.
// Exemplo: valor = RandomIntGenerate ( inferior, superior );


int ex1011() {
// identificacao
    printf( "\nExercicio 1011:\n\n" );
    getchar();
    printf("\nAperte ENTER para continuar!\n");
    getchar();
}
// fim exercicio1011

// Função para o exercício 1012
// procurar certo valor inteiro em um arranjo.
// Para testar, receber um nome de arquivo como parâmetro e
// aplicar a função sobre o arranjo com os valores lidos.
// Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
// resposta = arraySearch ( valor, arranjo );



int ex1012() {
// identificacao
    printf( "\nExercicio 1012:\n\n" );
    getchar();
    printf("\nAperte ENTER para continuar!\n");
    getchar();
}// Fim da função ex1012

// Função para o exercício 1013
// operar a comparação de dois arranjos.
// Para testar, receber dados de arquivos e
// aplicar a função sobre os arranjos com os valores lidos.
// DICA: Verificar se, e somente se, os tamanhos forem iguais.
// Exemplo: arranjo1 = readArrayFromFile ( "DADOS1.TXT" );
// arranjo2 = readArrayFromFile ( "DADOS2.TXT" );
// resposta = arrayCompare ( arranjo1, arranjo2 );



void ex1013() {
// identificacao
    printf( "\nExercicio 1013:\n\n" );
    // programa
    // encerrar
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da função ex1013

// Função para o exercício 1014
// operar a soma de dois arranjos, com os elementos do segundo multiplicados por uma constante.
// Para testar, receber dados de arquivos e
// aplicar a função sobre os arranjos com os valores lidos;
// DICA: Verificar se os tamanhos são compatíveis.
// Exemplo: arranjo1 = readArrayFromFile ( "DADOS1.TXT" );
// arranjo2 = readArrayFromFile ( "DADOS2.TXT" );
// soma = arrayAdd ( arranjo1, 1, arranjo2 );



void ex1014() {
// identificacao
    printf( "\nExercicio 1014:\n\n" );
    // programa
    getchar();
    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da função ex1014

// Função para o exercício 1015
// dizer se um arranjo está em ordem crescente.
// Para testar, receber um nome de arquivo como parâmetro e
// aplicar a função sobre o arranjo com os valores lidos.
// Exemplo: arranjo1 = readArrayFromFile ( "DADOS1.TXT" );
// resposta = isArrayCrescent ( arranjo );

void ex1015() {
// identificacao
    printf( "\nExercicio 1015:\n\n" );
    // programa
    // encerrar
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da função ex0915

// Função para o exercício 0916
// obter a transposta de uma matriz.
// Para testar, receber dados de arquivos e
// aplicar a função sobre as matrizes com os valores lidos.
// DICA: Verificar se os tamanhos são compatíveis.
// Exemplo: matriz1 = readMatrixFromFile ( "DADOS1.TXT" );
// matriz2 = matrixTranspose ( matriz1 );


void ex1016() {
// identificacao
    printf( "\nExercicio 1016:\n\n" );
    // programa
    // encerrar
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da função ex1016

// Função para o exercício 1017
// testar se uma matriz só contém valores iguais a zero.
// Para testar, receber dados de arquivos e
// aplicar a função sobre as matrizes com os valores lidos.
// DICA: Verificar se os tamanhos são compatíveis.
// Exemplo: matriz1 = readMatrixFromFile ( "DADOS1.TXT" );
// resposta = matrixZero ( matriz1 );


void ex1017() {
// identificacao
    printf( "\nExercicio 1017:\n\n" );
    // encerrar
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da função ex0917

// Função para o exercício 1018
// testar a igualdade de duas matrizes.
// Para testar, receber dados de arquivos e
// aplicar a função sobre as matrizes com os valores lidos.
// DICA: Verificar se os tamanhos são compatíveis.
// Exemplo: matriz1 = readMatrixFromFile ( "DADOS1.TXT" );
// matriz2 = readMatrixFromFile ( "DADOS2.TXT" );
// resposta = matrixCompare ( matriz1, matriz2 );



void ex1018() {
// identificacao
    printf( "\nExercicio 1018:\n\n" );
    // encerrar
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da função ex1018

// Função para o exercício 0919
// operar a soma de duas matrizes, com os elementos da segunda multiplicados por uma constante.
// Para testar, receber dados de arquivos e
// aplicar a função sobre as matrizes com os valores lidos.
// DICA: Verificar se os tamanhos são compatíveis.
// Exemplo: matriz1 = readMatrixFromFile ( "DADOS1.TXT" );
// matriz2 = readMatrixFromFile ( "DADOS2.TXT" );
// soma = matrixAdd ( matriz1, -1, matriz2 );

void ex1019() {
    // identificacao
    printf( "\nExercicio 1019:\n\n" );
    // encerrar
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da função ex0919

// Função para o exercício 1020
// obter o produto de duas matrizes.
// Para testar, receber dados de arquivos e
// aplicar a função sobre as matrizes com os valores lidos.
// DICA: Verificar se os tamanhos são compatíveis.
// Exemplo: matriz1 = readMatrixFromFile ( "DADOS1.TXT" );
// matriz2 = readMatrixFromFile ( "DADOS2.TXT" );
// soma = matrixProduct ( matriz1, matriz2 );

void ex1020() {
// identificacao
    printf( "\nExercicio 1020:\n\n" );

    // encerrar
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da função ex0320

// Função para o exercício 10E1
// colocar um arranjo em ordem decrescente, pelo método de trocas de posição.
// Para testar, receber um nome de arquivo como parâmetro e
// aplicar a função sobre o arranjo com os valores lidos.
// Exemplo: arranjo1 = readArrayFromFile ( "DADOS1.TXT" );
// ordenado = sortArrayDown ( arranjo );



void ex10E1() {
    printf( "\nExercicio 10E1:\n\n" );
    printf("\nAperte ENTER para continuar!\n");
    getchar();
    getchar();
}
// fim exercicio09E1
// Função para o exercício 10E2
// testar se o produto de duas matrizes é igual à matriz identidade.
// Para testar, receber dados de arquivos e
// aplicar a função sobre as matrizes com os valores lidos;
//DICA: Verificar se os tamanhos são compatíveis.
//Exemplo: matriz1 = readMatrixFromFile ( "DADOS1.TXT" );
//matriz2 = readMatrixFromFile ( "DADOS2.TXT" );
//resposta = identityMatrix ( matrixProduct (matriz1, matriz2) );


void ex10E2()
{
    // identificacao
    printf( "\nExercicio 10E2:\n\n" );
    printf("\nAperte ENTER para continuar!\n");
    getchar();
    getchar();
} // fim função 03E2

// Função principal
int main(void) {
    int opcao;

    do {
        menuOpcoes(); // Chama a função que exibe as opções

        printf("\nOpcao = ");
        scanf("%d", &opcao);
        getchar(); // Limpar o buffer de entrada

        // Executar a opção escolhida
        switch (opcao) {
            case 0: break;
            case 1: ex1011(); break;
            case 2: ex1012(); break;
            case 3: ex1013(); break;
            case 4: ex1014(); break;
            case 5: ex1015(); break;
            case 6: ex1016(); break;
            case 7: ex1017(); break;
            case 8: ex1018(); break;
            case 9: ex1019(); break;
            case 10: ex1020(); break;
            case 11: ex10E1(); break;
            case 12: ex10E2(); break;
            default:
                printf("\nERRO: OPCAO INVALIDA\n\n");
                break;
        } // fim switch

    } while (opcao != 0);

    printf("\nAperte ENTER para terminar!\n");
    getchar();

    return 0;
} // Fim da função principal
