/*
 Estudo Dirigido 02 - v0.0. - 21 / 08 / 2023
 Author: Matheus de Almeida Moreira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o ed02 ed02.c
 Windows: gcc -o ed02 ed02.c
 Para executar em terminal (janela de comandos):
 Linux : ./ed02
 Windows: ed02
*/

// dependencias
#include <stdio.h>

void menuOpcoes()
{
    printf("Escolha alguma das opcoes a seguir:\n\n");
    printf("  0 - Encerrar programa\n");
    printf("  1 - Exercicio 0211\n");
    printf("  2 - Exercicio 0212\n");
    printf("  3 - Exercicio 0213\n");
    printf("  4 - Exercicio 0214\n");
    printf("  5 - Exercicio 0215\n");
    printf("  6 - Exercicio 0216\n");
    printf("  7 - Exercicio 0217\n");
    printf("  8 - Exercicio 0218\n");
    printf("  9 - Exercicio 0219\n");
    printf(" 10 - Exercicio 0220\n");
    printf(" 11 - Exercicio 02E1\n");
    printf(" 12 - Exercicio 02E2\n");
} // fim menuOpcoes()
// Inicio Procedimentos (Funções)
Adicionar

// Fim procedimentos

// funcao principal
int main (void)
{
    int opcao = 0;

    do{
        // mostrar menu de opcoes
        menuOpcoes();

        // ler opcao do teclado
        printf("\n Opcao = ");
        scanf( "%d" , &opcao );
        getchar(); // limpar entrada de dados

        // executar a opcao escolhida
        switch (opcao)
        {
        case  0:                  break;
        case  1: ex0211(); break;
        case  2: ex0212(); break;
        case  3: ex0213(); break;
        case  4: ex0214(); break;
        case  5: ex0215(); break;
        case  6: ex0216(); break;
        case  7: ex0217(); break;
        case  8: ex0218(); break;
        case  9: ex0219(); break;
        case 10: ex0220(); break;
        case 11: ex02E1(); break;
        case 12: ex02E2(); break;
        default:
            printf( "\nERRO: OPCAO INVALIDA\n\n" );
            break;
        } // fim switch


    }while (opcao != 0);

    // encerrar
    printf( "\nAperte ENTER para terminar!\n" );
    getchar();

    return (0);
}

