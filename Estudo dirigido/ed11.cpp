/*
 Estudo Dirigido 11 - v0.0. - 21 / 10 / 2024
 Author: Matheus de Almeida Moreira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o ed11 ed11.c
 Windows: gcc -o ed11 ed11.c
 Para executar em terminal (janela de comandos):
 Linux : ./ed11
 Windows: ed11
*/

// dependencias
#include <iostream>
#include <ctime>
// Tamanho max string
const int TAM_STR = 80;
// Função para mostrar o menu de opções
void menuOpcoes() {
   std::cout << "\nEscolha alguma das opcoes a seguir:\n\n";
   std::cout << "  0 - Encerrar programa\n";
   std::cout << "  1 - Exercicio 1111\n";
   std::cout << "  2 - Exercicio 1112\n";
   std::cout << "  3 - Exercicio 1113\n";
   std::cout << "  4 - Exercicio 1114\n";
   std::cout << "  5 - Exercicio 1115\n";
   std::cout << "  6 - Exercicio 1116\n";
   std::cout << "  7 - Exercicio 1117\n";
   std::cout << "  8 - Exercicio 1118\n";
   std::cout << "  9 - Exercicio 1119\n";
   std::cout << "  10 - Exercicio 1120\n";
   std::cout << "  11 - Exercicio 11E1\n";
   std::cout << "  12 - Exercicio 11E2\n";
} // fim menuOpcoes()

// Função para o exercício 1111
// ler a quantidade de elementos ( N ) a serem gerados;
// gerar essa quantidade ( N ) de valores aleatórios
// dentro do intervalo e armazená-los em arranjo;
// gravá-los, um por linha, em um arquivo ("DADOS.TXT").
// A primeira linha do arquivo deverá informar a quantidade
// de números aleatórios ( N ) que serão gravados em seguida.
// DICA: Usar a função rand( ), mas tentar limitar valores muito grandes.
// Exemplo: valor = arranjo.randomIntGenerate ( inferior, superior );



int ex1011() {
// identificacao
    printf( "\nExercicio 1011:\n\n" );
    int inferior = 0, superior = 0, n = 0;
    srand(time(NULL));
    printf("Inferior =");
    scanf("%d", &inferior);
    printf("\nSuperior =");
    scanf("%d", &superior);
    printf("\nQuantidade =");
    scanf("%d", &n);
    int arranjo[n];
    for(int i = 0; i < n; i++){
        arranjo[i] = RandomIntGenerate(inferior, superior);
    }
    gravarEmArquivo("DADOS.TXT", arranjo, n);
    getchar();
    printf("\nAperte ENTER para continuar!\n");
    getchar();
}
// fim exercicio1011

// Função para o exercício 1012
procurar o maior valor par em um arranjo.
Para testar, receber um nome de arquivo como parâmetro e
aplicar a função sobre o arranjo com os valores lidos;
DICA: Usar o primeiro valor par, se houver, como referência inicial.
Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
maior = arranjo.searchFirstOdd ( );

intArray readArrayFromFile(const char* nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "rt");
    static intArray array;
    if(arquivo){
        fscanf(arquivo, "%d", &array.length);
        fgetc(arquivo);
        if(array.length <= 0){
            printf("\n%s\n", "ERRO: Tamanho invalido.");
            array.length = 0;
        }else{
            array.data = (int*)malloc(array.length * sizeof(int));
            if(array.data){
                array.ix = 0;
                while(!feof(arquivo) && array.ix < array.length){
                    fscanf(arquivo, "%d", &(array.data[array.ix]));
                    fgetc(arquivo);
                    array.ix++;
                }
            }
        }
        fclose(arquivo);
    }
    return array;
}

int arraySearch(int valor, intArray array){
    for (int i = 0; i < array.length; i++){
        if (array.data[i] == valor) {
            return i;
        }
    }
    return -1;
}


int ex1012() {
    // Identificação
    printf("\nExercicio 1012:\n\n");
    intArray array = readArrayFromFile("DADOS.TXT");
    int x = 0;
    printf("X = ");
    scanf("%d", &x);
    int resposta = arraySearch(x, array);
    if(resposta != -1){
        printf("Valor (%d) encontrado no indice: (%d)\n", x, resposta);
    }else{
        printf("Valor (%d) nao encontrado.\n", x);
    }
    if(array.data){
        free(array.data);
        array.data = NULL;
    }
    printf("\nAperte ENTER para continuar!\n");
    getchar(); // Pausa para esperar ENTER
    getchar(); // Lê o ENTER

    return 0; // Encerra com sucesso
}// Fim da função ex1012

// Função para o exercício 1013
procurar o menor valor par múltiplo de 3 em um arranjo.
Para testar, receber um nome de arquivo como parâmetro e
aplicar a função sobre o arranjo com os valores lidos;
DICA: Usar o primeiro valor par múltiplo de 3, se houver, como referência inicial.
Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
menor = arranjo.searchFirstEvenx3 ( );

int arrayCompare(intArray arranjo1, intArray arranjo2) {
    if(arranjo1.length != arranjo2.length){
        return 0;
    }
    for(int i = 0; i < arranjo1.length; i++){
        if(arranjo1.data[i] != arranjo2.data[i]){
            return 0;
        }
    }
    return 1;
}


void ex1013() {
// identificacao
    printf( "\nExercicio 1013:\n\n" );
    // programa
    intArray arranjo1 = readArrayFromFile("DADOS1.TXT");
    intArray arranjo2 = readArrayFromFile("DADOS2.TXT");
    int resposta = arrayCompare(arranjo1, arranjo2);
    if(resposta) {
        printf("Os arranjos sao iguais.\n");
    }else{
        printf("Os arranjos sao diferentes.\n");
    }
    free(arranjo1.data);
    free(arranjo2.data);
    // encerrar
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da função ex1013

// Função para o exercício 1014
somar todos os valores em um arranjo entre duas posições dadas.
Para testar, receber um nome de arquivo como parâmetro e
aplicar a função sobre o arranjo com os valores lidos;
Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
soma = arranjo.addInterval ( inicio, fim );

intArray arrayAdd(intArray arranjo1, int constante, intArray arranjo2) {
    intArray somaArranjo;
    somaArranjo.length = arranjo1.length;
    somaArranjo.data = (int*)malloc(somaArranjo.length * sizeof(int));
    if(arranjo1.length != arranjo2.length){
        printf("ERRO: Os tamanhos dos arranjos não são compatíveis.\n");
        somaArranjo.length = 0;
        return somaArranjo;
    }

    for(int i = 0; i < arranjo1.length; i++){
        somaArranjo.data[i] = arranjo1.data[i] + constante * arranjo2.data[i];
    }
    return somaArranjo;
}


void ex1014() {
// identificacao
    printf( "\nExercicio 1014:\n\n" );
    // programa
    intArray arranjo1 = readArrayFromFile("DADOS1.TXT");
    intArray arranjo2 = readArrayFromFile("DADOS2.TXT");
    int constante = 0;
    printf("Constante =");
    scanf("%d", &constante);
    intArray soma = arrayAdd(arranjo1, constante, arranjo2);
    if(soma.length != 0){
        printf("Resultado da soma dos arranjos:\n");
        for(int i = 0; i < soma.length; i++){
            printf("%d ", soma.data[i]);
        }
        printf("\n");
    }
    free(arranjo1.data);
    free(arranjo2.data);
    free(soma.data);
    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da função ex1014

// Função para o exercício 1015
achar a média dos valores em um arranjo entre duas posições dadas.
Para testar, receber um nome de arquivo como parâmetro e
aplicar a função sobre o arranjo com os valores lidos;
Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
media = arranjo.averageInterval ( inicio, fim );

int isArrayCrescent(intArray arranjo) {
    for(int i = 0; i < arranjo.length - 1; i++){
        if(arranjo.data[i] > arranjo.data[i + 1]){
            return 0;
        }
    }
    return 1;
}

void ex1015() {
// identificacao
    printf( "\nExercicio 1015:\n\n" );
    // programa
    intArray arranjo = readArrayFromFile("DADOS1.TXT");
    int resposta = isArrayCrescent(arranjo);
    if(resposta){
        printf("O arranjo esta em ordem crescente.\n");
    }else{
        printf("O arranjo nao esta em ordem crescente.\n");
    }
    free(arranjo.data);
    // encerrar
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da função ex0915

// Função para o exercício 0916
verificar se todos os valores são positivos em um arranjo.
Para testar, ler o arquivo ("DADOS.TXT")
armazenar os dados em um arranjo.
Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
teste = arranjo.negatives ( );

Matrix readMatrixFromFile(const char* filename) {
    FILE* file = fopen(filename, "r");
    Matrix matrix;
    if (file == NULL){
        printf("Erro ao abrir o arquivo %s\n", filename);
        matrix.data = NULL;
        matrix.rows = matrix.cols = 0;
        return matrix;
    }
    fscanf(file, "%d %d", &matrix.rows, &matrix.cols);
    matrix.data = (int**)malloc(matrix.rows * sizeof(int*));
    for(int i = 0; i < matrix.rows; i++) {
        matrix.data[i] = (int*)malloc(matrix.cols * sizeof(int));
        for(int j = 0; j < matrix.cols; j++){
            fscanf(file, "%d", &matrix.data[i][j]);
        }
    }
    fclose(file);
    return matrix;
}


Matrix matrixTranspose(Matrix matrix) {
    Matrix transposed;
    transposed.rows = matrix.cols;
    transposed.cols = matrix.rows;
    transposed.data = (int**)malloc(transposed.rows * sizeof(int*));
    for(int i = 0; i < transposed.rows; i++){
        transposed.data[i] = (int*)malloc(transposed.cols * sizeof(int));
        for(int j = 0; j < transposed.cols; j++){
            transposed.data[i][j] = matrix.data[j][i];
        }
    }
    return transposed;
}


void printMatrix(Matrix matrix){
    for(int i = 0; i < matrix.rows; i++){
        for(int j = 0; j < matrix.cols; j++){
            printf("%d ", matrix.data[i][j]);
        }
        printf("\n");
    }
}

void ex1016() {
// identificacao
    printf( "\nExercicio 1016:\n\n" );
    // programa
    Matrix matriz1 = readMatrixFromFile("DADOS1.TXT");
    Matrix matriz2 = matrixTranspose(matriz1);
    printf("Matriz original:\n");
    printMatrix(matriz1);
    printf("\nMatriz transposta:\n");
    printMatrix(matriz2);
    free(matriz1.data);
    free(matriz2.data);
    // encerrar
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da função ex1016

// Função para o exercício 1017
dizer se está ordenado, ou não, em ordem decrescente.
DICA: Testar se não está desordenado, ou seja,
se existe algum valor que seja maior que o seguinte.
Não usar break !
Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
teste = arranjo.isDecrescent ( );

int matrixZero(Matrix matrix){
    for(int i = 0; i < matrix.rows; i++){
        for(int j = 0; j < matrix.cols; j++){
            if(matrix.data[i][j] != 0){
                return 0;
            }
        }
    }
    return 1;
}

void ex1017() {
// identificacao
    printf( "\nExercicio 1017:\n\n" );
    Matrix matriz1 = readMatrixFromFile("DADOS1.TXT");
    int resposta = matrixZero(matriz1);
    if(resposta){
        printf("A matriz so tem valores iguais a zero.\n");
    }else{
        printf("A matriz tem valores diferentes de zero.\n");
    }
    free(matriz1.data);
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da função ex0917

// Função para o exercício 1018
dizer se determinado valor está presente em arranjo,
entre duas posições indicadas.
Para testar, ler o arquivo ("DADOS.TXT"),
e armazenar os dados em arranjo;
ler do teclado um valor inteiro para ser procurado;
determinar se o valor procurado existe no arranjo.
Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
existe = arranjo.searchInterval ( procurado, inicio, fim );

int matrixCompare(Matrix matrix1, Matrix matrix2) {
    if(matrix1.rows != matrix2.rows || matrix1.cols != matrix2.cols){
        return 0;
    }
    for(int i = 0; i < matrix1.rows; i++){
        for(int j = 0; j < matrix1.cols; j++){
            if(matrix1.data[i][j] != matrix2.data[i][j]){
                return 0;
            }
        }
    }
    return 1;
}


void ex1018() {
// identificacao
    printf( "\nExercicio 1018:\n\n" );
    Matrix matriz1 = readMatrixFromFile("DADOS1.TXT");
    Matrix matriz2 = readMatrixFromFile("DADOS2.TXT");
    int resposta = matrixCompare(matriz1, matriz2);
    if(resposta){
        printf("As matrizes sao iguais.\n");
    }else{
        printf("As matrizes sao diferentes.\n");
    }
    free(matriz1.data);
    free(matriz2.data);
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da função ex1018

// Função para o exercício 0919
// escalar dados em arranjo, entre duas posições dadas,
// multiplicando cada valor por uma constante.
// Para testar, ler o arquivo ("DADOS.TXT"),
// e armazenar os dados em arranjo;
// ler do teclado um valor inteiro para indicar a constante.
// Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
// novo = arranjo.scalar( constante, inicio, fim );

Matrix matrixAdd(Matrix matriz1, int constante, Matrix matriz2) {
    Matrix soma;
    soma.rows = matriz1.rows;
    soma.cols = matriz1.cols;
    soma.data = (int**)malloc(soma.rows * sizeof(int*));
    for(int i = 0; i < soma.rows; i++){
        soma.data[i] = (int*)malloc(soma.cols * sizeof(int));
        for(int j = 0; j < soma.cols; j++){
            soma.data[i][j] = matriz1.data[i][j] + constante * matriz2.data[i][j];
        }
    }
    return soma;
}

void ex1019() {
    // identificacao
    printf( "\nExercicio 1019:\n\n" );
    Matrix matriz1 = readMatrixFromFile("DADOS1.TXT");
    Matrix matriz2 = readMatrixFromFile("DADOS2.TXT");
    int constante = 0;
    printf("Constante = ");
    scanf("%d", &constante);
    Matrix soma = matrixAdd(matriz1, constante, matriz2);
    printf("Resultado da soma das matrizes:\n");
    printMatrix(soma);
    free(soma.data);
    free(matriz1.data);
    free(matriz2.data);
    // encerrar
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da função ex0919

// Função para o exercício 1020
// colocar valores em arranjo em ordem decrescente,
// mediante trocas de posições, até ficar totalmente ordenado.
// Para testar, ler o arquivo ("DADOS.TXT"),
// e armazenar os dados em arranjo.
// Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
// arranjo.sortDown ( );

Matrix matrixProduct(Matrix matriz1, Matrix matriz2) {
    Matrix produto;
    produto.rows = matriz1.rows;
    produto.cols = matriz2.cols;
    produto.data = (int**)malloc(produto.rows * sizeof(int*));
    for(int i = 0; i < produto.rows; i++){
        produto.data[i] = (int*)malloc(produto.cols * sizeof(int));
        for(int j = 0; j < produto.cols; j++){
            produto.data[i][j] = 0;
            for(int k = 0; k < matriz1.cols; k++){
                produto.data[i][j] += matriz1.data[i][k] * matriz2.data[k][j];
            }
        }
    }
    return produto;
}

void ex1020() {
// identificacao
    printf( "\nExercicio 1020:\n\n" );
    Matrix matriz1 = readMatrixFromFile("DADOS1.TXT");
    Matrix matriz2 = readMatrixFromFile("DADOS2.TXT");
    Matrix produto = matrixProduct(matriz1, matriz2);
    printf("Resultado do produto das matrizes:\n");
    printMatrix(produto);
    free(produto.data);
    free(matriz1.data);
    free(matriz2.data);
    // encerrar
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da função ex0320

// Função para o exercício 10E1
// Incluir uma função/operador (11E1) para
// dizer se dois arranjos são diferentes, pelo menos em uma posição.



void ex10E1(){
    printf("\nExercicio 10E1:\n\n");
    intArray arranjo1 = readArrayFromFile("DADOS1.TXT");
    sortArrayDown(arranjo1);
    printf("Arranjo ordenado em ordem decrescente:\n");
    for(int i = 0; i < arranjo1.length; i++){
        printf("%d ", arranjo1.data[i]);
    }
    printf("\nAperte ENTER para continuar!\n");
    getchar();
    free(arranjo1.data);
}
// fim exercicio09E1
// Função para o exercício 10E2
// calcular as diferenças entre dois arranjos, posição por posição,
// caso tenham tamanhos iguais.



void ex10E2(){
    // identificacao
    printf( "\nExercicio 10E2:\n\n" );
    Matrix matriz1 = readMatrixFromFile("DADOS1.TXT");
    Matrix matriz2 = readMatrixFromFile("DADOS2.TXT");
    Matrix produto = matrixProduct(matriz1, matriz2);
    int resposta = identityMatrix(produto);
    if(resposta){
        printf("O produto das matrizes eh a matriz identidade.\n");
    }else{
        printf("O produto das matrizes nao eh a matriz identidade.\n");
    }
    free(matriz1.data);
    free(matriz2.data);
    free(produto.data);
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
