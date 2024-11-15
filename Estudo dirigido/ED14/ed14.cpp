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
using namespace std;
// Tamanho max string
const int TAM_STR = 80;
// Fun��o para mostrar o menu de op��es

void close()
{
    cout << "\nAperte ENTER para continuar!\n";
    getchar();
}
void menuOpcoes()
{
    cout << "\nEscolha alguma das opcoes a seguir:\n\n";
    cout << "  0 - Encerrar programa\n";
    cout << "  1 - Exercicio 1311\n";
    cout << "  2 - Exercicio 1312\n";
    cout << "  3 - Exercicio 1313\n";
    cout << "  4 - Exercicio 1314\n";
    cout << "  5 - Exercicio 1315\n";
    cout << "  6 - Exercicio 1316\n";
    cout << "  7 - Exercicio 1317\n";
    cout << "  8 - Exercicio 1318\n";
    cout << "  9 - Exercicio 1319\n";
    cout << "  10 - Exercicio 1320\n";
    cout << "  11 - Exercicio 13E1\n";
    cout << "  12 - Exercicio 13E2\n";
} // fim menuOpcoes()

class Contato{
public:
    string nome

};


int ex1411()
{
// identificacao
    cout << "\nExercicio 1411:\n\n";
    close();
}





int ex1412()
{
    // Identifica��o
    cout << "\nExercicio 1412:\n\n";

    close();


}



void ex1413()
{
// identificacao
    cout << "\nExercicio 1413:\n\n" ;

    close();

}

void ex1414()
{
// identificacao
    cout << "\nExercicio 1414:\n\n" ;
    close();
}



void ex1415()
{
// identificacao
    cout << "\nExercicio 1415:\n\n" ;
    close();
}


void ex1416()
{
// identificacao
    cout << "\nExercicio 1416:\n\n" ;
    close();
}


void ex1417()
{
// identificacao
    cout << "\nExercicio 1417:\n\n" ;
    close();
}



void ex1418()
{
// identificacao
    cout << "\nExercicio 1418:\n\n" ;
    close();
}



void ex1419()
{
    // identificacao
    cout << "\nExercicio 1419:\n\n";

    close();
}



void ex1420()
{
// identificacao
    cout << "\nExercicio 1420:\n\n";
    close();
}



void ex14E1()
{
    cout << "\nExercicio 14E1:\n\n";
    close();
}




void ex14E2()
{
    // identificacao
    cout << "\nExercicio 14E2:\n\n";
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
            ex1411();
            break;
        case 2:
            ex1412();
            break;
        case 3:
            ex1413();
            break;
        case 4:
            ex1414();
            break;
        case 5:
            ex1415();
            break;
        case 6:
            ex1416();
            break;
        case 7:
            ex1417();
            break;
        case 8:
            ex1418();
            break;
        case 9:
            ex1419();
            break;
        case 10:
            ex1420();
            break;
        case 11:
            ex14E1();
            break;
        case 12:
            ex14E2();
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
