/*
 Estudo Dirigido 08 - v0.0. - 02 / 10 / 2024
 Author: Matheus de Almeida Moreira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o ed08 ed08.c
 Windows: gcc -o ed08 ed08.c
 Para executar em terminal (janela de comandos):
 Linux : ./ed08
 Windows: ed08
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
    printf("  1 - Exercicio 0811\n");
    printf("  2 - Exercicio 0812\n");
    printf("  3 - Exercicio 0813\n");
    printf("  4 - Exercicio 0814\n");
    printf("  5 - Exercicio 0815\n");
    printf("  6 - Exercicio 0816\n");
    printf("  7 - Exercicio 0817\n");
    printf("  8 - Exercicio 0818\n");
    printf("  9 - Exercicio 0819\n");
    printf(" 10 - Exercicio 0820\n");
    printf(" 11 - Exercicio 08E1\n");
    printf(" 12 - Exercicio 08E2\n");
} // fim menuOpcoes()



// Incluir função e método (0811) para:
// ler o tamanho de um arranjo para inteiros do teclado,
// bem como todos os seus elementos, garantindo que só tenha valores positivos e ímpares.
// Verificar se o tamanho (ou dimensão) não é nulo ou negativo.
// Para testar, ler diferentes quantidades de dados.

void ex0811()
{
    // identificacao
     printf("\nExercicio 0811:\n\n");
    //programa
    // encerrar
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
} // fim exercicio0811

// Fun��o para o exerc�cio 0812
// ler um valor inteiro do teclado e
// gravar essa quantidade em múltiplos de 6, pares, em ordem decrescente encerrando em 36.
// Exemplo: n = 5 => { 60, 54, 48, 42, 36 }

void ex0812() {
    // identificacao
    printf( "\nExercicio 0712:\n\n" );
    // programa
    int n = 0, controle = 0;
    printf("\nDigite o numero de vezes:");
    scanf("%d", &n);
    controle = 36+(6*(n-1));
    fun0712(controle, n);
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
    return 0;
}// Fim da fun��o ex0712

// Fun��o para o exerc�cio 0813
// ler um valor inteiro do teclado e
// gravar essa quantidade em valores da sequência: 1 4 16 64 256 ...
// Exemplo: n = 5 => { 1, 4, 16, 64, 256 }


void ex0813() {
// identificacao
    printf( "\nExercicio 0713:\n\n" );
    int n = 0;
    printf("\nDigite o numero de vezes:");
    scanf("%d", &n);
    fun0713(1, n);
    // encerrar
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
    return 0;

}// Fim da fun��o ex0813

// Fun��o para o exerc�cio 0814
// ler um valor inteiro do teclado e
// gravar essa quantidade em valores decrescentes da sequência: ... 1/256 1/64 1/16 1/4 1.
// Exemplo: n = 5 => { 1/256, 1/64, 1/16, 1/4, 1 }



void ex0814() {
// identificacao
    printf( "\nExercicio 0714:\n\n" );
    int n = 0, max = 0;
    printf("\nDigite o numero de vezes:");
    scanf("%d", &n);
    max = (aux0714(1, n))/4;
    fun0714(max,n);
    // encerrar
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();

}// Fim da fun��o ex0814

// Fun��o para o exerc�cio 0815
// ler um valor inteiro do teclado (n) e outro valor real (x),
// gravar essa quantidade (n) em valores reais da sequência: 1 1/x2 1/x4 1/x6...
// DICA: Usar pow ( x, y ) da biblioteca <math.h> para calcular a potência.
// Exemplo: n = 5 => { 1, 1/x2, 1/x4, 1/x6, 1/x8}


void ex0815() {
// identificacao
    printf( "\nExercicio 0715:\n\n" );
    printf("\nDigite o numero de vezes:");
    int n = 0;
    scanf("%d", &n);
    printf("\nDigite um numero real:");
    double real = 0.0;
    scanf("%lf", &real);
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();

}// Fim da fun��o ex0815

// Fun��o para o exerc�cio 0816
// ler um valor inteiro do teclado para representar certa quantidade de valores
// a serem somados dentre os primeiros gravados no exercício anterior.
// Testar essa função para quantidades diferentes.
// Gravar em outro arquivo ("RESULTADO06.TXT") cada quantidade e seu resultado.

void ex0816() {
    printf("\nExercicio 0716:\n\n");
    int n = 0;
    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);
    int array[n];
    int soma = 0;
    FILE *arquivo = fopen("RESULTADO06.TXT", "w");
    if (arquivo != NULL) {
        fprintf(arquivo, "Quantidade de termos: %d\n", n);
    for (int i = 0; i < n; i++) {
        printf("Digite o valor do array[%d]: ", i);
        scanf("%d", &array[i]);
        fprintf(arquivo, "\nTermo digitado: %d\n", array[i]);
        soma += array[i];
        fprintf(arquivo, "\nSoma do termo[%d] + termo[%d]: (%d)\n",array[i], array[i-1], soma);
        }
        fclose(arquivo);
        printf("Resultados gravados no arquivo RESULTADO06.TXT.\n");
    } else {
        printf("Erro ao criar o arquivo.\n");
    }
    getchar();
    printf("\nAperte ENTER para continuar!\n");
    getchar();
}
// Fim da fun��o ex0816

// Fun��o para o exerc�cio 0817
// ler um valor inteiro do teclado, e até essa quantidade, um valor por vez,
// calcular a soma dos inversos das potências do exercício 04.
// Gravar em outro arquivo ("RESULTADO07.TXT") cada quantidade e seu resultado.
// Exemplo: n = 5 => { 1/256 + 1/64 + 1/16 + 1/4 + 1 }



void ex0817() {
    // Identificacao
    printf("\nExercicio 0717:\n\n");
    int n = 0, max = 0;

    printf("\nDigite o numero de vezes: ");
    scanf("%d", &n);

    FILE *arquivo = fopen("RESULTADO07.TXT", "w");
    if (arquivo != NULL) {
        max = (aux0717(1, n))/4;
        fun0717(max, n, arquivo);
        fclose(arquivo);
        printf("Valores gravados no arquivo RESULTADO07.TXT. \n");
    } else {
        printf("Erro ao abrir o arquivo!\n");
    }

    getchar();
    printf("\nAperte ENTER para continuar!\n");
    getchar();
}



// Fun��o para o exerc�cio 0818
// ler um valor inteiro do teclado, e até atingir essa quantidade, um valor por vez,
// gravar o valor correspondente aos primeiros termos pares da série de Fibonacci.
// Gravar em outro arquivo ("RESULTADO08.TXT") cada quantidade e seu resultado.
// Exemplo: n = 5 => { 2, 8, 34, 144, 610 }


void ex0818() {
    // Identificação
    printf("\nExercicio 0718:\n\n");
    int n = 0;
    int controle = 0;
    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);
    FILE *arquivo = fopen("RESULTADO08.TXT", "w");
    if(arquivo != NULL){
    fprintf(arquivo, "Os primeiros (%d) termos pares da série de Fibonacci:\n", n);
    for(int i = 1; controle < n; i++){
        int termo = fibonacci(i);
        if (termo % 2 == 0){
            controle++;
            fprintf(arquivo, "\n%d ", termo);
        }
    }
    fprintf(arquivo, "\n");
    fclose(arquivo);
    printf("Valores gravados no arquivo RESULTADO08.TXT. \n");
    }else{
        printf("\nErro ao gravar");
    }
    getchar(); // Para capturar a nova linha deixada pelo scanf
    printf("\nAperte ENTER para continuar!\n");
    getchar();

}// Fim da fun��o ex0818
// Fun��o para o exerc�cio 0819
// para calcular a quantidade de minúsculas em cadeia de caracteres de um arquivo texto.
// Gravar em outro arquivo ("RESULTADO09.TXT") cada cadeia de caracteres e seus resultados.
// Testar essa função com cadeias de tamanhos diferentes.
// Exemplo: PaReDe de TiJoLoS AmaRElOs


void ex0819() {
// identificacao
    printf( "\nExercicio 0719:\n\n" );
    char string[100];
    fgets(string, sizeof(string), stdin);
    int resultado = fun0719(string);
    FILE *arquivo = fopen("RESULTADO09.TXT", "w");
    if (arquivo != NULL) {
        fprintf(arquivo, "Cadeia de caracteres: %s\n", string);
        fprintf(arquivo, "Quantidade de letras minusculas: %d\n", resultado);
        fclose(arquivo);
        printf("Resultado gravado em RESULTADO09.TXT.\n");
    } else {
        printf("Erro ao abrir o arquivo para escrita.\n");
    }
    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da fun��o ex0819

// Fun��o para o exerc�cio 0820
// para contar dígitos menores ou iguais a 4 em uma cadeia de caracteres.
// Gravar em outro arquivo ("RESULTADO10.TXT") cada cadeia de caracteres e seu resultado.
// Testar essa função para cadeias de tamanhos diferentes.
// Exemplo: P4R3D3 de T1J0L05 4maR3105


void ex0820() {
// identificacao
    printf( "\nExercicio 0720:\n\n" );
    char string[100];
    fgets(string, sizeof(string), stdin);
    int resultado = fun0720(string);

    FILE *arquivo = fopen("RESULTADO10.TXT", "w");
    if(arquivo != NULL){
        fprintf(arquivo, "Cadeia de caracteres: %s\n", string);
        fprintf(arquivo, "Quantidade de dígitos menores ou iguais a 4: %d\n", resultado);
        fclose(arquivo);
        printf("Resultado gravado em RESULTADO10.TXT.\n");
    }else{
        printf("Erro ao abrir o arquivo para escrita.\n");
    }
    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da fun��o ex0820

// Fun��o para o exerc�cio 08E1
// programa ler um valor inteiro do teclado, e
// gravar em arquivo os seus divisores pares em ordem decrescente.


void ex08E1() {
    printf("\nExercicio 07E1:\n\n");
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    fun07E1(n);
    // Encerrar
    printf("\nAperte ENTER para continuar!\n");
    getchar();
    getchar();

    return 0;
}// fim exercicio08E1
// Fun��o para o exerc�cio 08E2
// ver palavras de um arquivo, uma por linha, e
// contar quantas começam com a letra 'd' (ou 'D').
void ex08E2()
{
    // identificacao
    printf( "\nExercicio 07E2:\n\n" );

    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
} // fim fun��o 08E2

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
            case 1: ex0811(); break;
            case 2: ex0812(); break;
            case 3: ex0813(); break;
            case 4: ex0814(); break;
            case 5: ex0815(); break;
            case 6: ex0816(); break;
            case 7: ex0817(); break;
            case 8: ex0818(); break;
            case 9: ex0819(); break;
            case 10: ex0820(); break;
            case 11: ex08E1(); break;
            case 12: ex08E2(); break;
            default:
                printf("\nERRO: OPCAO INVALIDA\n\n");
                break;
        } // fim switch

    } while (opcao != 0);

    printf("\nAperte ENTER para terminar!\n");
    getchar();

    return 0;
} // Fim da fun��o principal
