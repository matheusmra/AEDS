/*
 Lista Recuperação 01 - v0.0. - 17 / 10 / 2024
 Author: Matheus de Almeida Moreira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o r01 r01.c
 Windows: gcc -o r01 r01.c
 Para executar em terminal (janela de comandos):
 Linux : ./r01
 Windows: r01
*/

// dependencias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>
// Tamanho max string
const int TAM_STR = 80;
#define MAX_LINHAS 10
#define MAX_COLUNAS 10
// Função para mostrar o menu de opções
void menuOpcoes() {
    printf("\nEscolha alguma das opcoes a seguir:\n\n");
    printf("  0 - Encerrar programa\n");
    printf("  1 - Exercicio 1\n");
    printf("  2 - Exercicio 2\n");
    printf("  3 - Exercicio 3\n");
    printf("  4 - Exercicio 4\n");
    printf("  5 - Exercicio 5\n");
    printf("  6 - Exercicio 6\n");
    printf("  7 - Exercicio 7\n");
    printf("  8 - Exercicio 8\n");
    printf("  9 - Exercicio 9\n");
    printf(" 10 - Exercicio 10\n");
} // fim menuOpcoes()

int isDecrescent(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            return 0;
        }
    }
    return 1;
}

void swapNum(int arr[], int n) {
    int trocou;
    do {
        trocou = 0;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] < arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                trocou = 1;
            }
        }
    } while (trocou);
}

int leitura(const char *nome_arquivo, int arr[], int tamanho_maximo) {
    FILE *arquivo = fopen(nome_arquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo %s.\n", nome_arquivo);
        return -1;
    }

    int n = 0;
    while (n < tamanho_maximo && fscanf(arquivo, "%d", &arr[n]) != EOF) {
        n++;
    }

    fclose(arquivo);
    return n;
}

void gravar_dados(const char *nome_arquivo, int arr[], int n) {
    FILE *arquivo = fopen(nome_arquivo, "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo %s.\n", nome_arquivo);
        return;
    }

    fprintf(arquivo, "%d\n", n);


    for (int i = 0; i < n; i++) {
        fprintf(arquivo, "%d\n", arr[i]);
    }

    fclose(arquivo);
}

int ex1() {
// identificacao
    printf( "\nExercicio 1:\n\n" );
    int arr[60];
    int n;
    n = leitura("DADOS1.TXT", arr, 60);
    if (n == -1) {
        return 1;
    }
    if (!isDecrescent(arr, n)) {
        swapNum(arr, n);
    }
    gravar_dados("CRESCENTE.TXT", arr, n);
    printf("Dados gravados em ordem decrescente no arquivo CRESCENTE.TXT.\n");
    printf("\nAperte ENTER para continuar!\n");
    getchar();
}

void inverter(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int ex2() {
// identificacao
    printf( "\nExercicio 02:\n\n" );
    int arr[60];
    int n = leitura("CRESCENTE.TXT", arr, 60);
    if (n == -1) {
        return 1;
    }
    inverter(arr, n);
    gravar_dados("INVERTIDOS.TXT", arr, n);
    printf("Dados invertidos gravados no arquivo INVERTIDOS.TXT.\n");
    printf("\nAperte ENTER para continuar!\n");
    getchar();
}

double calcular_media(int arr[], int n) {
    double soma = 0;
    for (int i = 0; i < n; i++) {
        soma += arr[i];
    }
    return soma / n;
}

double arranjo_mediana(int arr[], int n) {
    double media = calcular_media(arr, n);
    int menor_diferenca = abs(arr[0] - media);
    int valor_proximo1 = arr[0];
    int valor_proximo2 = arr[0];
    int encontrou_dois = 0;
    for (int i = 1; i < n; i++) {
        int diferenca = abs(arr[i] - media);
        if (diferenca < menor_diferenca) {
            menor_diferenca = diferenca;
            valor_proximo1 = arr[i];
            encontrou_dois = 0;
        } else if (diferenca == menor_diferenca && arr[i] != valor_proximo1) {
            valor_proximo2 = arr[i];
            encontrou_dois = 1;
        }
    }
    if (encontrou_dois) {
        return (valor_proximo1 + valor_proximo2) / 2.0;
    } else {
        return valor_proximo1;
    }
}
int calcular_moda(int arr[], int n) {
    int frequencias[100] = {0};
    int valor_moda = arr[0];
    int maior_frequencia = 1;
    for (int i = 0; i < n; i++) {
        frequencias[arr[i]]++;
        if (frequencias[arr[i]] > maior_frequencia) {
            maior_frequencia = frequencias[arr[i]];
            valor_moda = arr[i];
        }
    }
    return valor_moda;
}




void ex3() {
// identificacao
    printf( "\nExercicio 03:\n\n" );
    int arr[60];
    int n;
    n = leitura("DADOS1.TXT", arr, 60);
    if (n == -1) {
        return 1;
    }
    double mediana = arranjo_mediana(arr, n);
    printf("Mediana mais proxima da media: %.2f\n", mediana);
    int moda = calcular_moda(arr, n);
    printf("Moda do arranjo: %d\n", moda);
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}

int arranjo_filtrar(int arranjo_dest[], int arranjo1[], int size1, int arranjo2[], int size2) {
    int size_dest = 0;

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arranjo1[i] == arranjo2[j]) {
                // Verifica se o elemento já foi inserido no arranjo_dest
                int exists = 0;
                for (int k = 0; k < size_dest; k++) {
                    if (arranjo_dest[k] == arranjo1[i]) {
                        exists = 1;
                        break;
                    }
                }
                if (!exists) {
                    arranjo_dest[size_dest++] = arranjo1[i];
                }
                break;
            }
        }
    }
    return size_dest;
}



void ex4() {
// identificacao
    printf( "\nExercicio 04:\n\n" );
    int arranjo1[60], arranjo2[60], arranjo3[60];
    int size1 = 0, size2 = 0, size3 = 0;
    size1 = leitura("DADOS1.TXT", arranjo1, 60);
    size2 = leitura("DADOS2.TXT", arranjo2, 60);
    size3 = arranjo_filtrar(arranjo3, arranjo1, size1, arranjo2, size2);
    gravar_dados("FILTRADOS.TXT", arranjo3, size3);
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
    getchar();
}
void ex5() {
    // Identificação
    printf("\nExercicio 05:\n\n");

    printf("\nAperte ENTER para continuar!\n");
    getchar();
}// Fim da função ex0915

int ler_valor_n(const char *nome_arquivo) {
    FILE *arquivo = fopen(nome_arquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo %s\n", nome_arquivo);
        return -1;
    }

    int n;
    fscanf(arquivo, "%d", &n);
    fclose(arquivo);

    return n;
}

void criar_matriz_tridiagonal(int n, int matriz[n][n]) {
    int valor = 1;

    for (int i = 0; i < n; i++) {
        for (int j = (i - 1 < 0) ? 0 : i - 1; j <= (i + 1 < n ? i + 1 : n - 1); j++) {
            matriz[i][j] = valor++;
        }
    }
}

void gerarMatrizTridiagonalSecundaria(int n, int matriz[n][n]) {
    int valor = n*n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        if (i - 1 >= 0) matriz[i][n - i] = valor--;     // Diagonal inferior
        matriz[i][n - i - 1] = valor--;                 // Diagonal secundária principal
        if (i + 1 < n) matriz[i][n - i - 2] = valor--;  // Diagonal superior
    }
}

void exibir_matriz(int n, int matriz[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void gravar_matriz(const char *nome_arquivo, int n, int matriz[n][n]) {
    FILE *arquivo = fopen(nome_arquivo, "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo %s para gravação\n", nome_arquivo);
        return;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fprintf(arquivo, "%d ", matriz[i][j]);
        }
        fprintf(arquivo, "\n");
    }

    fclose(arquivo);
}



void ex6() {
// identificacao
    printf( "\nExercicio 06:\n\n" );
    int n = ler_valor_n("MATRIZ1.TXT");
    if (n == -1) {
        return 1;
    }
    int matriz[n][n];
    criar_matriz_tridiagonal(n, matriz);
    exibir_matriz(n, matriz);
    gravar_matriz("MATRIZ2.TXT", n, matriz);
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}




void ex7() {
// identificacao
    printf( "\nExercicio 07:\n\n" );
    int n = 0;
    printf("Digite o valor de N: ");
    scanf("%d", &n);
    int matriz[n][n];
    gerarMatrizTridiagonalSecundaria(n, matriz);
    printf("\nMatriz Tridiagonal Secundaria Decrescente:\n");
    exibir_matriz(n, matriz);
    gravar_matriz("MATRIZ2.TXT", n, matriz);
    printf("Matriz gravada no arquivo MATRIZ2.TXT com sucesso!\n");
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}


int ler_matriz(const char *nome_arquivo, int matriz[MAX_LINHAS][MAX_COLUNAS]) {
    FILE *arquivo = fopen(nome_arquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo %s.\n", nome_arquivo);
        return -1;
    }

    int linhas = 0, colunas = 0;
    while (fscanf(arquivo, "%d", &matriz[linhas][colunas]) != EOF) {
        colunas++;
        if (fgetc(arquivo) == '\n') {
            linhas++;
            colunas = 0;  // Reset de colunas para a próxima linha
        }
    }

    fclose(arquivo);
    return linhas + 1;  // Retorna o número de linhas
}

// Função para verificar se uma linha é uma sequência de potências
int verificar_potencias_por_linha(int linha[], int colunas) {
    int base = linha[0];  // O primeiro número da linha será a base
    for (int j = 1; j < colunas; j++) {
        if (linha[j] != pow(base, j)) {
            return 0;  // Se algum número não for uma potência, retorna 0
        }
    }
    return 1;  // Caso todas as colunas sejam potências da base
}

// Função para o exercício 8
void ex8() {
    printf("\nExercicio 08:\n\n");
    int matriz[MAX_LINHAS][MAX_COLUNAS];
    int linhas = ler_matriz("MATRIZ3.TXT", matriz);
    if (linhas == -1) {
        return; // Se falhar ao ler a matriz, sai da função
    }

    // Determina o número de colunas usando a primeira linha
    int colunas = 0;
    while (matriz[0][colunas] != '\0') {
        colunas++;
    }

    int matriz_valida = 1;
    for (int i = 0; i < linhas; i++) {
        if (!verificar_potencias_por_linha(matriz[i], colunas)) {
            printf("A linha %d nao segue a caracterstica de potências por linha.\n", i + 1);
            matriz_valida = 0;
        }
    }

    if (matriz_valida) {
        printf("Todas as linhas seguem a característica de potências por linha.\n");
    }
    printf("\nAperte ENTER para continuar!\n");
    getchar();
}


void ex9() {
    // identificacao
    printf( "\nExercicio 09:\n\n" );

    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}

#define MAX_SUPERMERCADOS 100
#define MAX_NOME 50

typedef struct {
    char nome[MAX_NOME];
    int codigo;
    float preco;
} Supermercado;

int lerDados(const char *nomeArquivo, Supermercado supermercados[], int *quantidade) {
    FILE *arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo %s\n", nomeArquivo);
        return 0;
    }
    fscanf(arquivo, "%d", quantidade);
    for (int i = 0; i < *quantidade; i++) {
        fscanf(arquivo, "%s %d %f", supermercados[i].nome, &supermercados[i].codigo, &supermercados[i].preco);
    }
    fclose(arquivo);
    return 1;
}


float calcularMedia(Supermercado supermercados[], int quantidade) {
    float soma = 0.0;
    for (int i = 0; i < quantidade; i++) {
        soma += supermercados[i].preco;
    }
    return soma / quantidade;
}


void exibirInferiores(Supermercado supermercados[], int quantidade, float media) {
    int contador = 0;

    printf("Supermercados com precos abaixo da media (%.lf):\n", media);
    for (int i = 0; i < quantidade; i++) {
        if (supermercados[i].preco < media) {
            printf("- Nome: %s | Codigo: %d | Preco: %.2f\n",
                   supermercados[i].nome,
                   supermercados[i].codigo,
                   supermercados[i].preco);
            contador++;
            if (contador == 2) break;
        }
    }

    if (contador < 2) {
        printf("Nao existem pelo menos 2 supermercados com precos abaixo da media.\n");
    }
}

void ex10() {
// identificacao
    printf( "\nExercicio 10:\n\n" );
    Supermercado supermercados[MAX_SUPERMERCADOS];
    int quantidade = 0;
    if (!lerDados("DADOS3.TXT", supermercados, &quantidade)) {
        return 1;
    }
    float media = calcularMedia(supermercados, quantidade);
    exibirInferiores(supermercados, quantidade, media);
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da função ex0320

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
            case 1: ex1(); break;
            case 2: ex2(); break;
            case 3: ex3(); break;
            case 4: ex4(); break;
            case 5: ex5(); break;
            case 6: ex6(); break;
            case 7: ex7(); break;
            case 8: ex8(); break;
            case 9: ex9(); break;
            case 10: ex10(); break;
            default:
                printf("\nERRO: OPCAO INVALIDA\n\n");
                break;
        } // fim switch

    } while (opcao != 0);

    printf("\nAperte ENTER para terminar!\n");
    getchar();

    return 0;
} // Fim da função principal
