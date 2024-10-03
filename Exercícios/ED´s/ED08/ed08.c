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
#define MAX_PALAVRAS 100
#define TAM_MAX_PALAVRA 50
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
void fun0811(int arranjo[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        do{

            scanf("%d", &arranjo[i]);
        }
        while (arranjo[i] <= 0 || arranjo[i] % 2 == 0); // Garante que seja positivo e ímpar
    }
}

void ex0811()
{
    // identificacao
     printf("\nExercicio 0811:\n\n");
    //
    int tamanho = 0;
    scanf("%d", &tamanho);
    if(tamanho > 0){
        int arranjo[tamanho];
        fun0811(arranjo,tamanho);
    for(int i = 0; i < tamanho; i++){
        printf("\nElemento %d = %d", i, arranjo[i]);

        }

    }else{
        printf("\nO valor do tamanho deve ser positivo");
    }

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
void fun0812(const char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    int tamanho = 0;
    fscanf(arquivo, "%d", &tamanho);
    int arranjo[tamanho];
    for(int i = 0; i < tamanho; i++){
        fscanf(arquivo, "%d", &arranjo[i]);
        if (arranjo[i] <= 0 || arranjo[i] % 2 == 0) {
            arranjo[i] = 0;
        }
    }
    fclose(arquivo);
    FILE *novoArquivo = fopen("novoex0812.txt", "w");
    if(novoArquivo == NULL){
        printf("Erro ao criar o arquivo de saída.\n");
        return;
    }
    fprintf(novoArquivo, "%d\n", tamanho);
    for(int i = 0; i < tamanho; i++){
        if(arranjo[i] != 0){
            fprintf(novoArquivo, "Elemento [%d] = %d\n",i, arranjo[i]);
        }
    }
    fclose(novoArquivo);
    printf("Dados salvos no arquivo 'novoex0812.txt'.\n");
}


void ex0812() {
    // identificacao
    printf( "\nExercicio 0812:\n\n" );
    const char *nomeArquivo = "ex0812.txt";
    fun0812(nomeArquivo);
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

void fun0817(int arr[], int tamanho) {
    int crescente = 1;
    int decrescente = 1;

    for (int i = 0; i < tamanho - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            crescente = 0;
        }
        if (arr[i] < arr[i + 1]) {
            decrescente = 0;
        }
    }

    if (crescente) {
        printf("O arranjo esta ordenado em ordem crescente.\n");
    } else if (decrescente) {
        printf("O arranjo esta ordenado em ordem decrescente.\n");
    } else {
        printf("O arranjo nao esta ordenado em nenhuma das duas ordens.\n");
    }
}

void ex0817() {
    // Identificacao
    printf("\nExercicio 0817:\n\n");
    int tamanho = 0;
    scanf("%d", &tamanho);
    int arranjo[tamanho];
    for(int i = 0; i < tamanho; i++){
        scanf("%d", &arranjo[i]);
    }
    fun0817(arranjo,tamanho);
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

    // Encerrar
    printf("\nAperte ENTER para continuar!\n");
    getchar();
    getchar();

    return 0;
}// fim exercicio08E1
// Fun��o para o exerc�cio 08E2
// ler um arquivo ( "PALAVRAS.TXT" ),
// e mediante uma função retornar as dez primeiras palavras
// que não comecem ou terminem com a letra 'd' (ou 'D'), se houver.
// As palavras encontradas deverão ser exibidas na tela,
// após retorno.
// DICA: Supor que a quantidade de palavras não ultrapassará 100
int aux08E2(char *palavra) {
    int tam = strlen(palavra);
    return (palavra[0] != 'd' && palavra[0] != 'D' && palavra[tam - 1] != 'd' && palavra[tam - 1] != 'D');
}

void fun08E2(char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    char palavras[MAX_PALAVRAS][TAM_MAX_PALAVRA];
    int totalPalavras = 0;
    while (totalPalavras < MAX_PALAVRAS && fscanf(arquivo, "%s", palavras[totalPalavras]) != EOF) {
        if (aux08E2(palavras[totalPalavras])) {
            printf("%s\n", palavras[totalPalavras]);
            totalPalavras++;
        }
    }
    fclose(arquivo);
}

void ex08E2()
{
    // identificacao
    printf( "\nExercicio 07E2:\n\n" );
    char nomeArquivo[] = "PALAVRAS.TXT";
    fun08E2(nomeArquivo);
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
