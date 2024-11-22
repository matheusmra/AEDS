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
#include <fstream>
#include <string>
#include <algorithm>
#include <cctype>
#include <cstring>
using namespace std;

void close()
{
    cout << "\nAperte ENTER para continuar!\n";
    getchar();
}
void menuOpcoes()
{
    cout << "\nEscolha alguma das opcoes a seguir:\n\n";
    cout << "  0 - Encerrar programa\n";
    cout << "  1 - Exercicio 1611\n";
    cout << "  2 - Exercicio 1612\n";
    cout << "  3 - Exercicio 1613\n";
    cout << "  4 - Exercicio 1614\n";
    cout << "  5 - Exercicio 1615\n";
    cout << "  6 - Exercicio 1616\n";
    cout << "  7 - Exercicio 1617\n";
    cout << "  8 - Exercicio 1618\n";
    cout << "  9 - Exercicio 1619\n";
    cout << "  10 - Exercicio 1620\n";
    cout << "  11 - Exercicio 16E1\n";
    cout << "  12 - Exercicio 16E2\n";
} // fim menuOpcoes()






int ex1611()
{
// identificacao
    cout << "\nExercicio 1611:\n\n";
    close();
}



int ex1612()
{
    // Identifica��o
    cout << "\nExercicio 1612:\n\n";
    close();


}


void ex1613()
{
// identificacao
    cout << "\nExercicio 1613:\n\n" ;
    close();

}


void ex1614()
{
// identificacao
    cout << "\nExercicio 1614:\n\n" ;
    close();
}


void ex1615()
{
// identificacao
    cout << "\nExercicio 1615:\n\n" ;
    close();
}

void ex1616()
{
// identificacao
    cout << "\nExercicio 1616:\n\n" ;

    close();
}


void ex1617()
{
// identificacao
    cout << "\nExercicio 1617:\n\n" ;
    close();
}

void ex1618()
{
// identificacao
    cout << "\nExercicio 1618:\n\n" ;
    close();
}


void ex1619()
{
    // identificacao
    cout << "\nExercicio 1619:\n\n";
    close();
}


void ex1620()
{
    // identificacao
    cout << "\nExercicio 1620:\n\n";
    close();
}



void ex16E1()
{
    cout << "\nExercicio 16E1:\n\n";

    close();
}




void ex16E2()
{
    // identificacao
    cout << "\nExercicio 16E2:\n\n";

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
            ex1511();
            break;
        case 2:
            ex1512();
            break;
        case 3:
            ex1513();
            break;
        case 4:
            ex1514();
            break;
        case 5:
            ex1515();
            break;
        case 6:
            ex1516();
            break;
        case 7:
            ex1517();
            break;
        case 8:
            ex1518();
            break;
        case 9:
            ex1519();
            break;
        case 10:
            ex1520();
            break;
        case 11:
            ex15E1();
            break;
        case 12:
            ex15E2();
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
