/*
 Estudo Dirigido 17 - v0.0. - 03 / 12 / 2024
 Author: Matheus de Almeida Moreira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o ed17 ed17.c
 Windows: gcc -o ed17 ed17.c
 Para executar em terminal (janela de comandos):
 Linux : ./ed17
 Windows: ed1
*/

// dependencias
#include <iostream>
#include <ctime>
#include <fstream>
#include <string>
#include <algorithm>
#include <cctype>
#include <cstring>
using namespace std;

typedef struct s_intStack {
    int* data;
    int length;
};
typedef IntArray* ref_intStack;

void close()
{
    cout << "\nAperte ENTER para continuar!\n";
    getchar();
}
void menuOpcoes()
{
    cout << "\nEscolha alguma das opcoes a seguir:\n\n";
    cout << "  0 - Encerrar programa\n";
    cout << "  1 - Exercicio 1711\n";
    cout << "  2 - Exercicio 1712\n";
    cout << "  3 - Exercicio 1713\n";
    cout << "  4 - Exercicio 1714\n";
    cout << "  5 - Exercicio 1715\n";
    cout << "  6 - Exercicio 1716\n";
    cout << "  7 - Exercicio 1717\n";
    cout << "  8 - Exercicio 1718\n";
    cout << "  9 - Exercicio 1719\n";
    cout << "  10 - Exercicio 1720\n";
    cout << "  11 - Exercicio 17E1\n";
    cout << "  12 - Exercicio 17E2\n";
} // fim menuOpcoes()


int ex1711()
{
// identificacao
    cout << "\nExercicio 1711:\n\n";
    close();
}


int ex1712()
{
    // Identifica��o
    cout << "\nExercicio 1172:\n\n";
    close();
}

void ex1713() {
    // Identificação
    cout << "\nExercicio 1713:\n\n";
    close();
}

void ex1714()
{
// identificacao
    cout << "\nExercicio 1714:\n\n" ;
    close();
}



void ex1715()
{
// identificacao
    cout << "\nExercicio 1715:\n\n" ;
    close();
}

void ex1716()
{
// identificacao
    cout << "\nExercicio 1716:\n\n" ;

    close();
}


void ex1717()
{
// identificacao
    cout << "\nExercicio 1717:\n\n" ;
    close();
}

void ex1718()
{
// identificacao
    cout << "\nExercicio 1718:\n\n" ;

    close();
}



void ex1719()
{
    // identificacao
    cout << "\nExercicio 1719:\n\n";

    close();
}

void ex1720()
{
    // identificacao
    cout << "\nExercicio 1720:\n\n";
    close();
}



void ex17E1()
{
    cout << "\nExercicio 17E1:\n\n";

    close();
}




void ex17E2()
{
    // identificacao
    cout << "\nExercicio 17E2:\n\n";

    close();
}

// Fun��o principal
int main(void)
{
    int opcao;

    do
    {
        menuOpcoes(); // Chama a fun��o que exibe as op��es

        cout << "\nOpcao = ";
        cin >> opcao;
        getchar(); // Limpar o buffer de entrada

        // Executar a op��o escolhida
        switch (opcao)
        {
        case 0:
            break;
        case 1:
            ex1711();
            break;
        case 2:
            ex1712();
            break;
        case 3:
            ex1713();
            break;
        case 4:
            ex1714();
            break;
        case 5:
            ex1715();
            break;
        case 6:
            ex1716();
            break;
        case 7:
            ex1717();
            break;
        case 8:
            ex1718();
            break;
        case 9:
            ex1719();
            break;
        case 10:
            ex1720();
            break;
        case 11:
            ex17E1();
            break;
        case 12:
            ex17E2();
            break;
        default:
            cout << "\nERRO: OPCAO INVALIDA\n\n";
            break;
        } // fim switch

    }
    while (opcao != 0);

    cout << "\nAperte ENTER para terminar!\n";
    getchar();

    return 0;
} // Fim da fun��o principal
