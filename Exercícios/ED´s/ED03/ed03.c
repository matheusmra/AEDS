/*
 Estudo Dirigido 03 - v0.0. - 23 / 08 / 2023
 Author: Matheus de Almeida Moreira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o ed03 ed03.c
 Windows: gcc -o ed03 ed03.c
 Para executar em terminal (janela de comandos):
 Linux : ./ed03
 Windows: ed03
*/

// dependencias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Tamanho max string
const int TAM_STR = 80;
// Função para mostrar o menu de opções
void menuOpcoes() {
    printf("\nEscolha alguma das opcoes a seguir:\n\n");
    printf("  0 - Encerrar programa\n");
    printf("  1 - Exercicio 0311\n");
    printf("  2 - Exercicio 0312\n");
    printf("  3 - Exercicio 0313\n");
    printf("  4 - Exercicio 0314\n");
    printf("  5 - Exercicio 0315\n");
    printf("  6 - Exercicio 0316\n");
    printf("  7 - Exercicio 0317\n");
    printf("  8 - Exercicio 0318\n");
    printf("  9 - Exercicio 0319\n");
    printf(" 10 - Exercicio 0320\n");
    printf(" 11 - Exercicio 03E1\n");
    printf(" 12 - Exercicio 03E2\n");
} // fim menuOpcoes()

// Função para o exercício 0311
// - ler uma palavra do teclado;
// - mostrar as letras maiúsculas.
// DICA: Definir um teste para determinar se um caractere é letra minúscula.

void ex0311()
{
    // identificacao
    printf( "\nExercicio 0311:\n\n" );

    // programa
    char palavra [TAM_STR];
    int tam = 0;

    printf( "Digite uma palavra: " );
    scanf( "%s" , palavra);
    getchar();
    printf( "\n" );

    tam = strlen(palavra);

    for(int i = 0; i < tam; i++ )
    {
        if( ( 64 < palavra[i]) && (palavra[i] < 91) )
        {
            printf( "A letra: [%c] eh maiuscula\n" , palavra[i] );
        }
    }

    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
} // fim exercicio0311

// Função para o exercício 0212
// - ler uma palavra do teclado;
// - contar e mostrar apenas as letras minúsculas.
void ex0312() {
    // identificacao
    printf( "\nExercicio 0312:\n\n" );

    // programa
    char palavra [TAM_STR];
    int tam = 0, contagem = 0;

    printf( "Digite uma palavra: " );
    scanf( "%s" , palavra);
    getchar();
    printf( "\n" );

    tam = strlen(palavra);

    for(int i = 0; i < tam; i++ )
    {
        if( !( ( 64 < palavra[i]) && (palavra[i] < 91) ))
        {
            contagem++;
            printf("A letra: [%c] eh minuscula\n", palavra[i]);
        }
    }
    printf("O total de letras minusculas eh: %d", contagem);

    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da função ex0212

// Função para o exercício 0213
// - Ler um valor inteiro do teclado e
// - Dizer se pertence ao intervalo aberto entre (25:45).
void ex0313(void) {
    int numero = 0;
    //Identificação
    printf("\nExercicio 0213:\n\n");
    //Inicio do programa
    printf("Digite um numero: ");
    scanf("%d", &numero);
    getchar(); // Limpar o buffer de entrada
    if (numero > 25 && numero < 45) {
        printf("%d faz parte do intervalo de 25 e 45.\n", numero);
    } else {
        printf("%d nao faz parte do intervalo.\n", numero);
    }
    printf("Aperte ENTER para continuar!\n");
    getchar();
}// Fim da função ex0213

// Função para o exercício 0214
// - Ler um valor inteiro do teclado e
// - Dizer se pertence ao intervalo fechado entre [20:60].
void ex0314(void) {
    int numero = 0;
    //Identificação
    printf("\nExercicio 0214:\n\n");
    //Inicio do programa
    printf("Digite o numero: ");
    scanf("%d", &numero);
    getchar(); // Limpar o buffer de entrada
    if (numero >= 20 && numero <= 60) {
        printf("%d faz parte do intervalo de 20 e 60.\n", numero);
    } else {
        printf("%d não faz parte do intervalo.\n", numero);
    }
    printf("Aperte ENTER para continuar!\n");
    getchar();
}// Fim da função ex0214

// Função para o exercício 0215
// - ler um valor inteiro do teclado e
// - dados os intervalos [10:25] e (15:50),
// - dizer se pertence à interseção ou a apenas a um deles.
void ex0315(void) {
    int numero = 0;
    //Identificação
    printf("\nExercicio 0215:\n\n");
    //Inicio do Programa
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    getchar(); // Limpar o buffer de entrada

    if ((numero >= 10 && numero <= 25) && (numero > 15 && numero < 50)) {
        printf("%d faz parte da interseção.\n", numero);
    } else if (numero >= 10 && numero <= 25) {
        printf("%d faz parte do intervalo de 10 e 25.\n", numero);
    } else if (numero > 15 && numero < 50) {
        printf("%d faz parte do intervalo de 15 e 50.\n", numero);
    }else if(numero < 10 || numero > 50){
        printf("%d nao faz parte do intervalo.\n", numero);
        }
    printf("Aperte ENTER para continuar!\n");
    getchar();
}// Fim da função ex0215

// Função para o exercício 0216
// - ler dois valores inteiros do teclado e
// - dizer se o primeiro é par e o segundo é ímpar.
void ex0316(void) {
    int numero1 = 0, numero2 = 0;
    //Identificação
    printf("\nExercicio 0216:\n\n");
    //Inicio do Programa
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);
    getchar(); // Limpar o buffer de entrada

    if (numero1 % 2 == 0 && numero2 % 2 != 0) {
        printf("O primeiro numero: %d eh par e o segundo numero: %d eh impar.\n", numero1, numero2);
    } else if (numero1 % 2 != 0 && numero2 % 2 != 0) {
        printf("Os dois numeros sao impares.\n");
    } else if (numero1 % 2 != 0 && numero2 % 2 == 0) {
        printf("O primeiro numero eh impar e o segundo eh par.\n");
    } else if (numero1 % 2 == 0 && numero2 % 2 == 0) {
        printf("Os dois numero sao pares.\n");
    }
    printf("Aperte ENTER para continuar!\n");
    getchar();
}// Fim da função ex0216

// Função para o exercício 0217
// - ler dois valores inteiros do teclado e
// - dizer se o primeiro é ímpar e negativo, e se o segundo é par e positivo.
void ex0317(void) {
    int numero1 = 0, numero2 = 0;
    printf("\nExercicio 0217:\n\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);
    getchar(); // Limpar o buffer de entrada

    if (numero1 % 2 != 0 && numero1 < 0 && numero2 % 2 == 0 && numero2 > 0) {
        printf("O primeiro numero: %d eh impar e negativo e o segundo numero: %d eh par e positivo.\n", numero1, numero2);
    } else if (numero1 % 2 != 0 && numero1 < 0 && numero2 % 2 != 0 && numero2 < 0) {
        printf("Ambos são impares e negativos.\n");
    } else if (numero1 % 2 == 0 && numero1 < 0 && numero2 % 2 != 0 && numero2 > 0) {
        printf("O primeiro numero eh par e negativo. O segundo eh impar e positivo.\n");
    } else if (numero1 % 2 == 0 && numero1 > 0 && numero2 % 2 == 0 && numero2 > 0) {
        printf("Ambos são pares e positivos.\n");
    } else if (numero1 % 2 != 0 && numero1 < 0 && numero2 % 2 == 0 && numero2 < 0) {
        printf("O primeiro numero é negativo e impar. O segundo eh par e negativo.\n");
    }
    printf("Aperte ENTER para continuar!\n");
    getchar();
}// Fim da função ex0217
// Função para o exercício 0218
// - ler dois valores reais do teclado e
// - dizer se o primeiro é menor, igual ou maior que a metade do segundo.
void ex0318(void) {
    double numero1 = 0.0, numero2 = 0.0;
    printf("\nExercicio 0218:\n\n");
    printf("Digite o primeiro numero: ");
    scanf("%lf", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%lf", &numero2);
    getchar(); // Limpar o buffer de entrada

    if (numero1 < (numero2 / 2)) {
        printf("O numero %.2lf eh menor que a metade de %.2lf.\n", numero1, numero2);
    } else if (numero1 == (numero2 / 2)) {
        printf("O numero %.2lf eh a metade de %.2lf", numero1, numero2);
    } else if (numero1 > (numero2 / 2)) {
        printf("O numero %.2lf eh maior que a metade de %.2lf.\n", numero1, numero2);
    }
    printf("Aperte ENTER para continuar!\n");
    getchar();
}// Fim da função ex0218

// Função para o exercício 0219
// - ler três valores reais do teclado e
// - dizer se o segundo está entre o primeiro e o último,
// - quando esses dois forem diferentes entre si.
// - OBS.: Notar a ordem dos testes.

void ex0319(void) {
    double numero1 = 0.0, numero2 = 0.0, numero3 = 0.0;
    printf("\nExercicio 0219:\n\n");
    printf("Digite o primeiro numero: ");
    scanf("%lf", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%lf", &numero2);
    printf("Digite o terceiro numero: ");
    scanf("%lf", &numero3);
    getchar(); // Limpar o buffer de entrada

    if (numero1 != numero3) {
        if (numero2 > numero1 && numero2 < numero3) {
            printf("O numero %.2lf esta entre os numeros: %.2lf e %.2lf.\n", numero2, numero1, numero3);
        } else {
            printf("O numero %.2lf nao esta entre os numeros.\n", numero2);
        }
    } else {
        printf("ERRO: O Primeiro numero deve ser diferente do Terceiro numero.\n");
    }
    printf("Aperte ENTER para continuar!\n");
    getchar();
}// Fim da função ex0219

// Função para o exercício 0220
// - ler três valores reais do teclado e
// - dizer se o segundo não está entre o primeiro e o último,
// - quando todos forem diferentes entre si.
void ex0320(void) {
    double numero1 = 1.0, numero2 = 1.0, numero3 = 1.0;
    printf("\nExercicio 0220:\n\n");
    printf("Digite o primeiro numero: ");
    scanf("%lf", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%lf", &numero2);
    printf("Digite o terceiro numero: ");
    scanf("%lf", &numero3);
    getchar(); // Limpar o buffer de entrada

    if (numero1 != numero2 && numero1 != numero3 && numero2 != numero3) {
        if (numero2 < numero1 || numero2 > numero3) {
            printf("O numero %.2lf nao esta entre os numeros: %.2lf e %.2lf.\n", numero2, numero1, numero3);
        } else {
            printf("O numero %.2lf esta entre os numeros: %.2lf e %.2lf.\n", numero2, numero1, numero3);
        }
    } else {
        printf("ERRO: Os tres numeros devem ser diferentes!\n");
    }
    printf("Aperte ENTER para continuar!\n");
    getchar();
}// Fim da função ex0220

// Função para o exercício 02E1
// - ler três valores literais (caracteres) do teclado e
// - dizer se o primeiro valor lido está entre os outros dois, ou se é igual a um deles.

void ex03E1(void) {
    char a = 'a', b = 'b', c = 'c';
    printf("\nExercicio 02E1:\n\n");
    printf("Digite o primeiro caractere: ");
    scanf(" %c", &a);
    printf("Digite o segundo caractere: ");
    scanf(" %c", &b);
    printf("Digite o terceiro caractere: ");
    scanf(" %c", &c);
    getchar(); // Limpar o buffer de entrada

    if (a == b || a == c) {
        printf("%c eh igual a pelo menos um dos outros valores.\n", a);
    } else if ((a > b && a < c) || (a < b && a > c)) {
        printf("%c esta entre %c e %c.\n", a, b, c);
    } else {
        printf("%c nao esta entre %c e %c.\n", a, b, c);
    }
    printf("Aperte ENTER para continuar!\n");
    getchar();
}// Fim da função ex02E1

// Função para o exercício 02E2
// - ler três valores literais (caracteres) do teclado e
// - dizer se o primeiro valor lido está fora do intervalo definido pelos outros dois,
// - se esses forem diferentes entre si.
// - OBS.: Notar que não haverá garantias de ser o segundo menor que o terceiro.
void ex03E2(void) {
    char a = 'a', b = 'b', c = 'c';
    printf("\nExercicio 02E2:\n\n");
    printf("Digite o primeiro caractere: ");
    scanf(" %c", &a);
    printf("Digite o segundo caractere: ");
    scanf(" %c", &b);
    printf("Digite o terceiro caractere: ");
    scanf(" %c", &c);
    getchar(); // Limpar o buffer de entrada

    if (b != c) {
        if (!(((b < a) && (a < c)) || ((b > a) && (a > c)))) {
            printf("O caractere (%c) esta fora do intervalo (%c : %c).\n", a, b, c);
        } else {
            printf("O caractere (%c) esta dentro do intervalo (%c : %c).\n", a, b, c);
        }
    } else {
        printf("Tem dois caracteres iguais.\n");
    }
    printf("Aperte ENTER para continuar!\n");
    getchar();
}// Fim da função ex02E2

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
            case 1: ex0311(); break;
            case 2: ex0312(); break;
            case 3: ex0313(); break;
            case 4: ex0314(); break;
            case 5: ex0315(); break;
            case 6: ex0316(); break;
            case 7: ex0317(); break;
            case 8: ex0318(); break;
            case 9: ex0319(); break;
            case 10: ex0320(); break;
            case 11: ex03E1(); break;
            case 12: ex03E2(); break;
            default:
                printf("\nERRO: OPCAO INVALIDA\n\n");
                break;
        } // fim switch

    } while (opcao != 0);

    printf("\nAperte ENTER para terminar!\n");
    getchar();

    return 0;
} // Fim da função principal
