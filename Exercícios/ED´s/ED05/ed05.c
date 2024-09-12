/*
 Estudo Dirigido 05 - v0.0. - 12 / 09 / 2024
 Author: Matheus de Almeida Moreira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o ed05 ed05.c
 Windows: gcc -o ed05 ed05.c
 Para executar em terminal (janela de comandos):
 Linux : ./ed05
 Windows: ed05
*/

// dependencias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
// Fun��o para mostrar o menu de op��es
void menuOpcoes() {
    printf("\nEscolha alguma das opcoes a seguir:\n\n");
    printf("  0 - Encerrar programa\n");
    printf("  1 - Exercicio 0511\n");
    printf("  2 - Exercicio 0512\n");
    printf("  3 - Exercicio 0513\n");
    printf("  4 - Exercicio 0514\n");
    printf("  5 - Exercicio 0515\n");
    printf("  6 - Exercicio 0516\n");
    printf("  7 - Exercicio 0517\n");
    printf("  8 - Exercicio 0518\n");
    printf("  9 - Exercicio 0519\n");
    printf(" 10 - Exercicio 0520\n");
    printf(" 11 - Exercicio 05E1\n");
    printf(" 12 - Exercicio 05E2\n");
} // fim menuOpcoes()



// Fun��o para o exerc�cio 0411
// - ler a quantidade de valores reais;
// - ler dois valores reais para definir um intervalo fechado;
// - ler tantos valores reais quanto a quantidade, um de cada vez e
// - contar quantos desses valores est�o dentro do intervalo, e quantos est�o fora dele

void ex0511()
{
    // identificacao
     printf("\nExercicio 0511:\n\n");

    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
} // fim exercicio0511

// Fun��o para o exerc�cio 0512
// - ler uma sequ�ncia de caracteres do teclado;
// - contar e mostrar a quantidade de letras min�sculas menores que 'm'.
// DICA: Definir uma fun��o para determinar se um caractere � letra mai�scula.
// Exemplo: sequ�ncia = AaKkLmM0*Nx
void ex0512() {
    // identificacao
    printf( "\nExercicio 0512:\n\n" );

    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
    return 0;
}// Fim da fun��o ex0512

// Fun��o para o exerc�cio 0513
// - ler uma sequ�ncia de caracteres do teclado;
// - mostrar a quantidade de letras min�sculas menores que 'm',
// - definir e usar uma fun��o para receber uma cadeia de caracteres como par�metro e contar a quantidade desejada.
// Exemplo: sequ�ncia = AaKkLmM0*Nx
void ex0513() {
// identificacao
    printf( "\nExercicio 0513:\n\n" );
    // vari�veis
    char cadeia[80];
    // programa
    printf( "Digite uma palavra: " );
    scanf( "%s" , cadeia);
    getchar();
    printf( "\n" );
    contarm(cadeia);
    // Testar se o caractere � minusculo e menor que m
    printarmenorm(cadeia);
    printf("O total de letras minusculas menores que 'm' eh: %d ", contarm(cadeia));
    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
    return 0;

}// Fim da fun��o ex0413

// Fun��o para o exerc�cio 0414
// - ler uma sequ�ncia de caracteres do teclado;
// - mostrar as letras min�sculas menores que 'm',
// - definir e usar uma fun��o para receber uma cadeia de caracteres como par�metro e separar em outra cadeia de caracteres os s�mbolos desejados.
// DICA: Usar concatena��o para juntar a uma cadeia inicialmente vazia cada s�mbolo encontrado que satisfizer a condi��o.
// Exemplo: sequ�ncia = AaKkLmM0*Nx
void ex0414() {
// identificacao
    printf( "\nExercicio 0414:\n\n" );
    // vari�veis
    char cadeia[80], cadeia2[80];
    // programa
    printf( "Digite uma palavra: " );
    scanf( "%s" , cadeia);
    getchar();
    printf( "\n" );
    separarDigitos(cadeia, cadeia2);
    printf("Digitos separados: %s\n", cadeia2);
    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();

}// Fim da fun��o ex0414

// Fun��o para o exerc�cio 0415
// - ler uma sequ�ncia de caracteres do teclado;
// - mostrar a quantidade de letras (tanto mai�sculas, quanto min�sculas) menores que 'M' e 'm' contadas por uma fun��o definida para receber uma cadeia de caracteres como par�metro.
// Exemplo: sequ�ncia = AaKkLmM0*Nx
void ex0415() {
// identificacao
    printf( "\nExercicio 0415:\n\n" );
    // variavel
    char cadeia[80];
    // programa
    printf( "Digite uma palavra: " );
    scanf( "%s" , cadeia);
    getchar();
    printf( "\n" );
    contarM(cadeia);
    contarm(cadeia);
    printarmenorm(cadeia);
    printarmenorM(cadeia);
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();

}// Fim da fun��o ex0415

// Fun��o para o exerc�cio 0416
// - ler uma sequ�ncia de caracteres do teclado;
// - mostrar as letras (tanto mai�sculas, quanto min�sculas) maiores que 'M' e 'm'
 //separadas por uma fun��o definida para receber uma cadeia de caracteres como par�metro.
//Exemplo: sequ�ncia = AaKkLmM0*Nx

void ex0416() {
// identificacao
    printf( "\nExercicio 0416:\n\n" );
    // variavel
    char cadeia[80];
    // programa
    printf( "Digite uma palavra: " );
    scanf( "%s" , cadeia);
    getchar();
    printf( "\n" );
    contarmaiorM(cadeia);
    contarmaiorm(cadeia);
    printarmaiorm(cadeia);
    printarmaiorM(cadeia);
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();

}// Fim da fun��o ex0416

// Fun��o para o exerc�cio 0417
// - ler uma sequ�ncia de caracteres do teclado;
// - mostrar a quantidade de d�gitos �mpares em uma cadeia de caracteres contados por uma fun��o
 //definida para receber uma cadeia de caracteres como par�metro.
 //DICA: Considerar o valor inteiro do c�digo equivalente (type casting) para teste.
//Exemplo: sequ�ncia = A1b2C3d4E5f6
void ex0417(void) {
// identificacao
    printf( "\nExercicio 0417:\n\n" );
    // variavel
    char cadeia[80];
    // programa
    printf( "Digite uma palavra: " );
    scanf( "%s" , cadeia);
    getchar();
    printf( "\n" );
    impar(cadeia);
    printf("O total de numeros impares na cadeia eh: %d", impar(cadeia));
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();

}// Fim da fun��o ex0417
// Fun��o para o exerc�cio 0418
// - ler uma sequ�ncia de caracteres do teclado;
// - mostrar todos os s�mbolos n�o alfanum�ricos (letras e d�gitos) em uma cadeia de caracteres
 //separados por meio de uma fun��o.
// Exemplo: sequ�ncia = (A1b2+C3d4)*E5f6
void ex0418() {
// identificacao
    printf( "\nExercicio 0418:\n\n" );
    // variavel
    char cadeia[80];
    // programa
    printf( "Digite uma palavra: " );
    scanf( "%s" , cadeia);
    getchar();
    printf( "\n" );
    verchar(cadeia);
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da fun��o ex0418

// Fun��o para o exerc�cio 0419
// - ler uma sequ�ncia de caracteres do teclado;
// - mostrar todos os s�mbolos alfanum�ricos (letras e d�gitos) em uma cadeia de caracteres
 //separados por meio de uma fun��o.
//Exemplo: sequ�ncia = (A1b2+C3d4)*E5f6
void ex0419() {
    // identificacao
    printf( "\nExercicio 0419:\n\n" );
  // variavel
    char cadeia[80];
    // programa
    printf( "Digite uma palavra: " );
    scanf( "%s" , cadeia);
    getchar();
    printf( "\n" );
    alfanum(cadeia);
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();

}// Fim da fun��o ex0419

// Fun��o para o exerc�cio 0420
// - ler certa quantidade de cadeias de caracteres do teclado, uma por vez;
// - mostrar e contar a quantidade de s�mbolos alfanum�ricos (letras e d�gitos) em cada palavra,
 //por meio de uma fun��o, e calcular o total acumulado de todas as palavras.
//Exemplo: sequ�ncias = { (A1b2+C3d4)*E5f6, [P&&Q]||[R&&!S], (a<b&&b<c) }

void ex0420() {
// identificacao
    printf( "\nExercicio 0420:\n\n" );


}// Fim da fun��o ex0420

// Fun��o para o exerc�cio 04E1
// - ler certa quantidade de cadeias de caracteres do teclado;
// - contar a quantidade de s�mbolos alfanum�ricos, incluindo espa�os em branco, em cada palavra,
// e calcular o total de todas as palavras, por meio de uma fun��o.
//OBS.: Para a leitura incluir espa�os em branco, usar IO_readln( ) ou fgets( ).
// Exemplo: sequ�ncia = (A1b2 + C3d4) * E5f6

void ex04E1()
{
    // identificacao
    printf( "\nExercicio 04E1:\n\n" );

} // fim exercicio04E1
// Fun��o para o exerc�cio 04E2
// - ler duas cadeias de caracteres do teclado;
// - calcular qual das duas sequ�ncias possui a maior quantidade de d�gitos,por meio de uma fun��o.
// Exemplo: sequ�ncia = { A1b2, C3d4E5 }
void ex04E2()
{
    // identificacao
    printf( "\nExercicio 04E2:\n\n" );
 // variavel
    char cadeia1[80], cadeia2[80];
    // programa
    printf( "Digite a primeira cadeia: " );
    scanf( "%s" , cadeia1);
    getchar();
    printf( "\n" );
    printf( "Digite a segunda cadeia: " );
    scanf( "%s" , cadeia2);
    getchar();
    metodo04E2(cadeia1, cadeia2);
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
            case 1: ex0411(); break;
            case 2: ex0412(); break;
            case 3: ex0413(); break;
            case 4: ex0414(); break;
            case 5: ex0415(); break;
            case 6: ex0416(); break;
            case 7: ex0417(); break;
            case 8: ex0418(); break;
            case 9: ex0419(); break;
            case 10: ex0420(); break;
            case 11: ex04E1(); break;
            case 12: ex04E2(); break;
            default:
                printf("\nERRO: OPCAO INVALIDA\n\n");
                break;
        } // fim switch

    } while (opcao != 0);

    printf("\nAperte ENTER para terminar!\n");
    getchar();

    return 0;
} // Fim da fun��o principal
