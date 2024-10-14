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
// testar se não são todos zeros os valores abaixo da diagonal principal de uma matriz real quadrada.
// Exemplo: double positiveMatrix [10][10];
 // readPositiveDoubleMatrix ( 3, 3, positiveMatrix );
//  bool result = allZerosLTriangleDoubleMatrix ( 3, 3, positiveMatrix );


bool allZerosLTriangleDoubleMatrix(int n, double positiveMatrix[n][n]) {
    if(n <= 0){
        printf("A matriz deve ser quadrada (n x n) e n > 0.\n");
        return false;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if(positiveMatrix[i][j] != 0.0){
                return false;
            }
        }
    }
    return true;
}

void ex0919() {
    // identificacao
    printf( "\nExercicio 0919:\n\n" );
    int n = 0;
    scanf("%d", &n);
    if(n <= 0){
        printf("A matrix deve ser maior que 0");
    }
    double positiveMatrix[n][n];
    readPositiveDoubleMatrix(n, n, positiveMatrix);
    printLDTriangleDoubleMatrix(n, positiveMatrix);
    bool result = allZerosLTriangleDoubleMatrix(n, positiveMatrix);
    if(result){
        printf("\nTodos os valores abaixo da diagonal principal sao igual a 0");
    }else{
        printf("\nExistem valores diferentes de zero");
    }
    // encerrar
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da função ex0919

// Função para o exercício 0920
// testar se são zeros os valores acima da diagonal principal de uma matriz real quadrada.
//Exemplo: double positiveMatrix [10][10];
 // readPositiveDoubleMatrix ( 3, 3, positiveMatrix );
 // bool result = allZerosUTriangleDoubleMatrix ( 3, 3, positiveMatrix );

bool allZerosUTriangleDoubleMatrix(int n, double positiveMatrix[n][n]) {
    if(n <= 0){
        printf("A matriz deve ser quadrada (n x n) e n > 0.\n");
        return false;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j > i && positiveMatrix[i][j] != 0.0){
                return false;
            }
        }
    }
    return true;
}


void ex0920() {
// identificacao
    printf( "\nExercicio 0920:\n\n" );
    int n = 0;
    scanf("%d", &n);
    if(n <= 0){
        printf("A matrix deve ser maior que 0");
    }
    double positiveMatrix[n][n];
    readPositiveDoubleMatrix(n, n, positiveMatrix);
    printLUTriangleDoubleMatrix(n, positiveMatrix);
    bool result = allZerosUTriangleDoubleMatrix(n, positiveMatrix);
    if(result){
        printf("\nTodos os valores acima da diagonal principal sao igual a 0.");
    }else{
        printf("\nExistem valores diferentes de zero");
    }
    // encerrar
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da função ex0320

// Função para o exercício 09E1
// ler do teclado as quantidades de linhas e colunas de uma matriz,
// e montar uma matriz com a característica abaixo,
// a qual deverá ser gravada em arquivo, após o retorno.
// Exemplos:
// 1 5 9 13
// 1 4 7 2 6 10 14
// 1 3 2 5 8 3 7 11 15
// 2 4 3 6 9 4 8 12 1


void preencherMatriz(int matriz[][TAM_STR], int n) {
    int valor = 1;
    for(int j = 0; j < n; j++){
        for(int i = 0; i < n; i++){
            matriz[i][j] = valor;
            valor++;
        }
    }
}

void salvarMatrizEmArquivo(int matriz[][TAM_STR], int n) {
    FILE* arquivo = fopen("extra01.txt", "w");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo.\n");
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            fprintf(arquivo, "%d\t", matriz[i][j]);
        }
        fprintf(arquivo, "\n");
    }
    fclose(arquivo);
    printf("Matriz salva no arquivo \"extra01.txt\".\n");
}

void ex09E1() {
    int n;
    printf("Digite o tamanho da matriz (n): ");
    scanf("%d", &n);
    if(n <= 0 || n > TAM_STR){
        printf("Tamanho inválido. Use um valor entre 1 e %d.\n", TAM_STR);
    }
    int positiveMatrix[TAM_STR][TAM_STR];
    preencherMatriz(positiveMatrix, n);
    salvarMatrizEmArquivo(positiveMatrix, n);
    printf("\nAperte ENTER para continuar!\n");
    getchar();
    getchar();
}
// fim exercicio09E1
// Função para o exercício 09E2
// ler do teclado as quantidades de linhas e colunas de uma matriz,
// e montar uma matriz com a característica abaixo,
// a qual deverá ser gravada em arquivo, após o retorno.
// Exemplos:
// 16 15 14 13
// 9 8 7 12 11 10 9
// 4 3 6 5 4 8 7 6 5
// 2 1 3 2 1 4 3 2 1

void preencherMatrizInversa(int matriz[][TAM_STR], int n) {
    int valor = n*n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            matriz[i][j] = valor;
            valor--;
        }
    }
}

void salvarMatrizInversaEmArquivo(int matriz[][TAM_STR], int n) {
    FILE* arquivo = fopen("extra02", "w");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo.\n");
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            fprintf(arquivo, "%d\t", matriz[i][j]);
        }
        fprintf(arquivo, "\n");
    }
    fclose(arquivo);
    printf("Matriz salva no arquivo \"extra02.txt\".\n");
}

void ex09E2()
{
    // identificacao
    printf( "\nExercicio 09E2:\n\n" );
    int n;
    printf("Digite o tamanho da matriz (n): ");
    scanf("%d", &n);
    if(n <= 0 || n > TAM_STR){
        printf("Tamanho inválido. Use um valor entre 1 e %d.\n", TAM_STR);
    }
    int positiveMatrix[TAM_STR][TAM_STR];
    preencherMatrizInversa(positiveMatrix, n);
    salvarMatrizInversaEmArquivo(positiveMatrix, n);
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
            case 1: ex0911(); break;
            case 2: ex0912(); break;
            case 3: ex0913(); break;
            case 4: ex0914(); break;
            case 5: ex0915(); break;
            case 6: ex0916(); break;
            case 7: ex0917(); break;
            case 8: ex0918(); break;
            case 9: ex0919(); break;
            case 10: ex0920(); break;
            case 11: ex09E1(); break;
            case 12: ex09E2(); break;
            default:
                printf("\nERRO: OPCAO INVALIDA\n\n");
                break;
        } // fim switch

    } while (opcao != 0);

    printf("\nAperte ENTER para terminar!\n");
    getchar();

    return 0;
} // Fim da função principal
