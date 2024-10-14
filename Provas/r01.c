/*
 Lista Recupera��o 01 - v0.0. - 14 / 10 / 2024
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
// Tamanho max string
const int TAM_STR = 80;
// Fun��o para mostrar o menu de op��es
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

// Fun��o para o exerc�cio 1011
// - ler um valor inteiro (n) do teclado para indicar uma quantidade;
//- ler outros tantos valores inteiros (x) do teclado, um por vez, at� atingir a quantidade;
// - dizer para cada valor lido se h� mais divisores �mpares do que pares.
// DICA: Usar apenas alternativas simples.
// O resultado N�O dever� ser mostrado dentro da fun��o.
// Exemplos:
// n = 5
// x = { 22, 121, 440, 581, 814 }
// soma_impares = soma_divisores_impares ( valor );
// soma_pares = soma_divisores_pares ( valor );
void lerArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
}
int soma_divisores_impares(int arr[], int n){
    int somad = 0;
    for(int i = 0; i < n; i++){
        if(arr[i]%2!=0){
            somad++;
        }
    }
    return somad;
}

int soma_divisores_pares(int arr[], int n){
    int somapares = 0;
    for(int i = 0; i < n; i++){
        if(arr[i]%2==0){
            somapares++;
        }
    }
    return somapares;
}

void comparar(int v1, int v2){
    if(v1>v2){
        printf("\nO array possui mais divisores impares");
    }else if(v2 > v1){
        printf("\nO array possui mais divisores pares");
    }else{
        printf("\nO array possui o mesmo numero de divisores pares e impares");
    }
}

int ex1() {
// identificacao
    printf( "\nExercicio 1:\n\n" );
    int n = 0;
    scanf("%d", &n);
    int arr[n];
    lerArray(arr,n);
    int soma_impares = soma_divisores_impares(arr,n);
    int soma_pares = soma_divisores_pares(arr,n);
    comparar(soma_impares,soma_pares);
    getchar();
    printf("\nAperte ENTER para continuar!\n");
    getchar();
}
// fim exercicio1011

// Fun��o para o exerc�cio 1012
//- ler um valor inteiro (n) do teclado para indicar uma quantidade;
//- ler outros tantos valores inteiros (x) do teclado, um por vez, at� atingir a quantidade;
//- dizer para cada valor lido se � primo, ou n�o, verificado por fun��o.
//DICA: Usar alternativas dupla.
//O resultado N�O dever� ser mostrado dentro da fun��o.
//N�O usar break ou continue.
//Usar apenas 01 retorno.
//O resultado N�O dever� ser mostrado dentro da fun��o.
//Exemplos:
//n = 5
//x = { -293, -107, 153, 199, 811 }
//resposta = primo ( valor );

int ehPrimo(int numero) {
    if (numero <= 1) {
        return 0;
    }
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }
    return 1;
}

void resultado(int arr[], int n){
    for (int i = 0; i < n; i++) {
        int resposta = ehPrimo(arr[i]);
        if (resposta == 1) {
            printf("O valor (%d) eh primo.\n", arr[i]);
        } else {
            printf("O valor (%d) nao eh primo.\n", arr[i]);
        }
    }
}


int ex2() {
// identificacao
    printf( "\nExercicio 02:\n\n" );
    int n = 0;
    scanf("%d", &n);
    int arr[n];
    lerArray(arr,n);
    resultado(arr,n);
    printf("\nAperte ENTER para continuar!\n");
    getchar();
    getchar();
}// Fim da fun��o ex1012

// Fun��o para o exerc�cio 1013
//- ler uma cadeia de caracteres do teclado;
//- dizer se cada s�mbolo � um operador l�gico (&,|,!), aritm�tico (+,-,*,/,%), relacional (>,<,=),
//separadores (espa�o, ponto, v�rgula, ponto-e-v�rgula, dois-pontos, sublinha)
//ou outro s�mbolo qualquer.
//DICA: Definir e usar fun��es para identificar cada um desses tipos de s�mbolo.
//O resultado N�O dever� ser mostrado dentro da fun��o.
//Usar switch para escolhas.
//Usar apenas 01 retorno.
//O resultado N�O dever� ser mostrado dentro da fun��o.
//Exemplos:
//"for(x=0;x<y&&y>=0;x=x+1)"
//resposta = testar_simbolo ( valor );

int operador_logico(char c) {
    return (c == '&' || c == '|' || c == '!');
}


int operador_aritmetico(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '%');
}


int operador_relacional(char c) {
    return (c == '>' || c == '<' || c == '=');
}


int separador(char c) {
    return (c == ' ' || c == '.' || c == ',' || c == ';' || c == ':' || c == '_');
}

int maiuscula(char c){
    return (c >= 'A' && c <= 'Z');
}

int minuscula(char c){
    return (c >= 'a' && c <= 'z');
}

int digito(char c){
    return (c >= '0' && c <= '9');
}


const char* testar_simbolo(char c) {
    switch (1) {
        case 1:
            if (operador_logico(c)) return "Operador Logico";
        case 2:
            if (operador_aritmetico(c)) return "Operador Aritmetico";
        case 3:
            if (operador_relacional(c)) return "Operador Relacional";
        case 4:
            if (separador(c)) return "Separador";
        default:
            return "Outro Simbolo";
    }
}



void ex3() {
// identificacao
    printf( "\nExercicio 03:\n\n" );
    // programa
    char cadeia[TAM_STR];
    scanf("%s", &cadeia);
    for(int i = 0; i < strlen(cadeia); i++){
        char* resposta = testar_simbolo(cadeia[i]);
        printf("O simbolo (%c) eh: %s\n", cadeia[i], resposta);
    }
    // encerrar
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da fun��o ex1013

// Fun��o para o exerc�cio 1014
//- ler um cadeia de caracteres (s) do teclado;
//- testar cada s�mbolo na cadeia, um por vez,
//e contar separadamente quantos desses s�o letras mai�sculas, min�sculas, d�gitos e
//operadores (l�gicos, aritm�ticos e relacionais) e separadores.
//DICA: Definir e reutilizar fun��es j� definidas para identificar cada tipo de s�mbolo (ver acima).
//Os resultados N�O dever�o ser mostrados dentro das fun��es.
//Usar switch para escolhas e somas.
//Usar apenas 01 retorno.
//Exemplos:
//"for(X=0;X<y&&y>=0;X=X+1)"
//resposta = testar_tipo ( valor );

const char* testar_tipo(char c, int* totallogico, int* totalari, int* totalrela, int* totalsep, int* totalmaiu, int* totalminu, int* totaldi) {
    if (operador_logico(c)) {
        (*totallogico)++;
        return "Operador Logico";
    }
    if (operador_aritmetico(c)) {
        (*totalari)++;
        return "Operador Aritmetico";
    }
    if (operador_relacional(c)) {
        (*totalrela)++;
        return "Operador Relacional";
    }
    if (separador(c)) {
        (*totalsep)++;
        return "Separador";
    }
    if (maiuscula(c)) {
        (*totalmaiu)++;
        return "Maiuscula";
    }
    if (minuscula(c)) {
        (*totalminu)++;
        return "Minuscula";
    }
    if (digito(c)) {
        (*totaldi)++;
        return "Digito";
    }
}

void exibirResultados(int totallogico, int totalari, int totalrela, int totalsep, int totalmaiu, int totalminu, int totaldi){
    printf("Operadores Logicos: %d\n", totallogico);
    printf("Operadores Aritmeticos: %d\n", totalari);
    printf("Operadores Relacionais: %d\n", totalrela);
    printf("Separadores: %d\n", totalsep);
    printf("Maiusculas: %d\n", totalmaiu);
    printf("Minusculas: %d\n", totalminu);
    printf("Digitos: %d\n", totaldi);
}

void ex4() {
// identificacao
    printf( "\nExercicio 04:\n\n" );
    // programa
    char cadeia[TAM_STR];
    int totallogico = 0, totalari = 0, totalrela = 0, totalsep = 0, totalmaiu = 0, totalminu = 0, totaldi = 0;
    scanf("%s", &cadeia);
    for(int i = 0; i < strlen(cadeia); i++){
        const char* resultado = testar_tipo(cadeia[i], &totallogico, &totalari, &totalrela, &totalsep,&totalmaiu, &totalminu, &totaldi);
    }
    exibirResultados(totallogico,totalari,totalrela, totalsep, totalmaiu,  totalminu,totaldi);
    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
    getchar();
}// Fim da fun��o ex1014

// Fun��o para o exerc�cio 1015
//- ler um valor inteiro (n) do teclado;
//- ler outros (n) valores reais (x) do teclado, um por vez;
//- calcular e mostrar a m�dia dos valores menores que -27.25;
//a m�dia dos que est�o entre -27.2 e 91.25, inclusive esses;
//e a m�dia dos maiores que 91.25. Dizer qual a menor m�dia de todas.
//DICA: Definir e usar fun��o para calcular o menor dentre tr�s valores.
//O resultado N�O dever� ser mostrado dentro da fun��o.
//Exemplos:
//n = 10
//x = { -15.25, -12.50, 0.0, 6.75, 20.50, 50.0, 70.25, 85.25, 92.50, 98.75 }
//resposta1 = no_intervalo ( inferior, superior, valor );

void ex5() {
// identificacao
    printf( "\nExercicio 05:\n\n" );
    // programa
    // encerrar
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da fun��o ex0915

// Fun��o para o exerc�cio 0916
//- ler dois valores inteiros (a) e (b) do teclado,
//- ler outros valores inteiros do teclado, um por vez,
//at� que o �ltimo valor seja igual a (-1).
//- para cada valor lido que estiver no intervalo aberto ]a:b[;
//calcular e mostrar a soma dos cubos dos inversos (1/x3) dos �mpares n�o m�ltiplos de 3.
//DICA: Evitar divis�o por zero mediante uso de alternativa dupla.
//Definir e usar fun��es para testar o pertencimento ao intervalo,
//e para calcular a soma.
//O resultado N�O dever� ser mostrado dentro da fun��o.
//Exemplos:
//a = 20
//b = 60
//x = { -20, -11, 0, 1, 10, 21, 36, 51, 70, 80, -1 }
//resposta = soma_cubos ( a, b );


void ex6() {
// identificacao
    printf( "\nExercicio 06:\n\n" );
    // programa
    // encerrar
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da fun��o ex1016

// Fun��o para o exerc�cio 1017
//- ler dois valores reais (a) e (b) do teclado,
//- ler outros valores reais do teclado, um por vez,
//at� que o �ltimo valor seja igual a zero,
//e n�o consider�-lo para os c�lculos.
//- contar quantos desses valores est�o dentro ou fora
//do intervalo definido pelo intervalo aberto ]a:b[;
//- para os valores fora do intervalo, calcular separadamente
//as porcentagens dos que estiverem acima e abaixo do intervalo, nessa ordem.
//DICA: Evitar divis�o por zero mediante uso de alternativas duplas.
//Reutilizar a fun��o para testar o pertencimento (ou n�o) ao intervalo.
//O resultado N�O dever� ser mostrado dentro da fun��o.
//Exemplos:
//a = 20
//b = 60
//x = { -20, -10, 1, 10, 20, 30, 60, 70, 80, 0 }
//resposta = no_intervalo ( a, b, valor );


void ex7() {
// identificacao
    printf( "\nExercicio 07:\n\n" );
    // encerrar
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da fun��o ex0917

// Fun��o para o exerc�cio 1018
//- ler tr�s valores reais (x,y,z) do teclado, um por vez;
//- dizer se esses valores est�o em ordem crescente,
//decrescente ou em nenhuma dessas ordens e, nesse caso, o menor e o maior.
//DICA: Usar testes com maior n�mero de compara��es usando conectivos l�gicos ( &&, || e ! ).
//Definir fun��es para testar as ordens crescente e decrescente.
//O resultado N�O dever� ser mostrado dentro da fun��o.
//Exemplos:
//x = 10, y = 20, z = 30
//x = 30, y = 20, z = 10
//x = 10, y = 10, z = 10
//resposta1 = crescente ( x, y, z );
//resposta2 = decrescente ( x, y, z );
//resposta3 = maior ( x, y, z );
//resposta4 = menor ( x, y, z );



void ex8() {
// identificacao
    printf( "\nExercicio 08:\n\n" );
    // encerrar
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da fun��o ex1018

// Fun��o para o exerc�cio 0919
//- ler tr�s caracteres (x,y,z) do teclado, um por vez;
//- dizer se esses valores est�o em ordem crescente,
//decrescente ou em nenhuma dessas ordens.
//DICA: Usar uma fun��o l�gica para comparar os c�digos inteiros de cada caractere,
//e dizer se o segundo sucede o primeiro em ordem alfab�tica.
//Definir fun��es para testar as ordens alfab�ticas crescente e decrescente.
//O resultado N�O dever� ser mostrado dentro da fun��o.
//Exemplos:
//x = '1', y = '2', z = '3'
//x = '3', y = '2', z = '1'
//x = '1', y = '1', z = '1'
//resposta1 = crescente ( x, y, z );
//resposta2 = decrescente ( x, y, z );
//resposta3 = sucessor ( x, y );

void ex9() {
    // identificacao
    printf( "\nExercicio 09:\n\n" );
    // encerrar
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da fun��o ex0919

// Fun��o para o exerc�cio 1020
//- ler tr�s cadeias de caracteres (x,y,z) do teclado, uma por vez;
//- dizer se essas cadeias est�o em ordem alfab�tica decrescente,
//decrescente ou em nenhuma dessas ordens e, nesse caso, a menor e a maior.
//DICA: Usar strcmp( ) da biblioteca <string.h> e comparar o resultado com zero.
//A fun��o para a compara��o poder� retornar um dentre
//os seguintes resultados:
//O resultado N�O dever� ser mostrado dentro da fun��o.
//negativo, se a primeira cadeia preceder a segunda (resultado menor que zero);
//nulo , se as cadeias forem iguais (resultado igual a zero);
//positivo , se a primeira cadeia suceder a segunda (resultado maior que zero).
//Exemplo:
//char s1 [ ] = �abc�;
//char s2 [ ] = �ABC�;
//if ( strcmp ( s1, s2 ) != 0 )
//{
//printf ( "%s\n", �diferentes� );
//} // end if

void ex10() {
// identificacao
    printf( "\nExercicio 10:\n\n" );

    // encerrar
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da fun��o ex0320

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
} // Fim da fun��o principal
