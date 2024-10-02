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



// Incluir função e método (0711) para:
// ler um valor inteiro do teclado e
// gravar essa quantidade em múltiplos de 3, ímpares, em ordem crescente, começando em 3.
// Exemplo: n = 5 => { 3, 9, 15, 21, 27 }

void ex0811()
{
    // identificacao
     printf("\nExercicio 0711:\n\n");
    //programa
    int n = 0;
    printf("\nDigite o numero de vezes:");
    scanf("%d", &n);
    fun0711(3, n);
    // encerrar
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
} // fim exercicio0711

// Fun��o para o exerc�cio 0712
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

// Fun��o para o exerc�cio 0713
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

}// Fim da fun��o ex0713

// Fun��o para o exerc�cio 0714
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

}// Fim da fun��o ex0714

// Fun��o para o exerc�cio 0715
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

}// Fim da fun��o ex0715

// Fun��o para o exerc�cio 0716
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
// Fim da fun��o ex0716

// Fun��o para o exerc�cio 0717
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



// Fun��o para o exerc�cio 0718
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

}// Fim da fun��o ex0718
// Fun��o para o exerc�cio 0719
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
}// Fim da fun��o ex0719

// Fun��o para o exerc�cio 0720
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
}// Fim da fun��o ex0720

// Fun��o para o exerc�cio 07E1
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
}// fim exercicio07E1
// Fun��o para o exerc�cio 07E2
// ver palavras de um arquivo, uma por linha, e
// contar quantas começam com a letra 'd' (ou 'D').
void ex08E2()
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
