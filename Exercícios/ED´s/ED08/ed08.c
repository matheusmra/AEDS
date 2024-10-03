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
// ler um arranjo com inteiros de arquivo.
// Valores negativos e também os pares deverão ser descartados.
// O arranjo e o nome do arquivo serão dados como parâmetros.
// Guardar, em arquivo primeiro o tamanho, depois os elementos, um dado por linha.
// Para testar, ler diferentes nomes e quantidade de dados.
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
}// Fim da fun��o ex0812

// Fun��o para o exerc�cio 0813
// gerar um valor inteiro aleatoriamente dentro de um intervalo,
// cujos limites de início e de fim serão recebidos como parâmetros;
// Para para testar, ler os limites do intervalo do teclado;
// ler a quantidade de elementos ( N ) a serem gerados;
// gerar essa quantidade ( N ) de valores aleatórios
// dentro do intervalo e armazená-los em arranjo;
// gravá-los, um por linha, em um arquivo ("DADOS.TXT").
// A primeira linha do arquivo deverá informar a quantidade
// de números aleatórios ( N ) que serão gravados em seguida.
// DICA: Usar a função rand( ), mas tentar limitar valores muito grandes (usar mod=%).
// Exemplo: valor = gerarInt ( inferior, superior );


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
// procurar o menor valor ímpar em um arranjo.
// Para testar, receber um nome de arquivo como parâmetro e
// aplicar a função sobre o arranjo com os valores lidos;
// DICA: Procurar o primeiro valor par da tabela como referência inicial
// para o menor valor ímpar existente, se houver.
// Exemplo: arranjo = lerArquivo ( n, "DADOS.TXT" );
// menor = acharMenorImpar ( n, arranjo );



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
// procurar o maior valor par e múltiplo de 3 em um arranjo.
// Para testar, receber um nome de arquivo como parâmetro e
// aplicar a função sobre o arranjo com os valores lidos;
// DICA: Usar o primeiro valor par múltiplo de 3 na tabela, se houver, como referência inicial.
// Exemplo: arranjo = lerArquivo ( n, "DADOS.TXT" );
// maior = acharMaiorParDivisivelPorTres ( n, arranjo );


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
// para determinar a média valores em um arranjo.
// Para testar, ler o arquivo ("DADOS.TXT")
// armazenar os dados em um arranjo;
// separar em dois outros arquivos,
// os valores menores ou iguais à média, e os maiores que ela.
// Exemplo: arranjo = lerArquivo ( n, "DADOS.TXT" );
// media = acharMedia ( n, arranjo );
// DICA: Considerar a possiblidade de que a quantidade de dados possa ser igual a zero.

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
// receber como parâmetro um arranjo
// e dizer se está ordenado, ou não, em ordem decrescente.
// DICA: Testar se não está desordenado, ou seja,
// se existe algum valor que seja maior que o seguinte.
// Não usar break !


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
// procurar por determinado valor em arranjo e
// dizer se esse valor pode ser nele encontrado,
// indicada a posição inicial para se começar a procura.
// Para testar, ler o arquivo ("DADOS.TXT"),
// e armazenar os dados em arranjo;
// ler do teclado um valor inteiro para ser procurado;
// determinar se o valor procurado existe no arranjo,
// a partir da posição indicada.
// Exemplo: arranjo = lerArquivo ( n, "DADOS.TXT" );
// existe = acharValor ( procurado, 0, n, arranjo );


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
// procurar por determinado valor em arranjo e
// dizer onde se encontra esse valor,
// indicada a posição inicial para começar a procura.
// Para testar, ler o arquivo ("DADOS.TXT"),
// e armazenar os dados em arranjo;
// ler do teclado um valor inteiro para ser procurado;
// determinar onde o valor procurado estiver no arranjo,
// se houver.
// Exemplo: arranjo = lerArquivo ( n, "DADOS.TXT" );
// onde = acharPosicao ( procurado, 0, n, arranjo );

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
// procurar por determinado valor em arranjo e
// dizer quantas vezes esse valor pode ser encontrado,
// indicada a posição inicial para começar a procura.
// Para testar, ler o arquivo ("DADOS.TXT"),
// e armazenar os dados em arranjo;
// ler do teclado um valor inteiro para ser procurado;
// determinar quantas vezes o valor procurado aparece no arranjo,
// se ocorrer.
// Exemplo: arranjo = lerArquivo ( n, "DADOS.TXT" );
// vezes = acharQuantos ( procurado, 0, n, arranjo );



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
// ler um valor inteiro do teclado,
// e mediante funções para calcular e retornar a quantidade
// e seus divisores ímpares guardados em arranjo,
// o qual deverá ser mostrado na tela após o retorno,
// bem como gravado em arquivo ( "DIVISORES.TXT" ).
// DICA: Supor que a quantidade de divisores
// será, no máximo, igual ao próprio número


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
