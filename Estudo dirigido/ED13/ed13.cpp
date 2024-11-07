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

class Contato
{
private:
    string nome;
    string tel;
public:
    void readName()
    {
        string novonome;
        cout << "Nome:" << endl;
        getline(cin, novonome);
        if (!novonome.empty())
        {
            nome = novonome;
        }
        else
        {
            cout << "Erro ao cadastrar nome.\n";

        }
    }
    void showName()
    {
        if (!nome.empty())
        {
            cout << "Nome: " << nome << endl;
        }
        else
        {
            cout << "Nome nao foi atribuido.\n";
        }
    }
    void readPhone(){
        string newphone;
        cout << "Telefone:" << endl;
        getline(cin, newphone);
        if (!newphone.empty()){
            tel = newphone;
        }
        else
        {
            cout << "Erro ao cadastrar telefone" << endl;
        }
    }
    void showPhone(){
        if (!tel.empty())
        {
            cout << "Telefone: " << tel << endl;
        }
        else
        {
            cout << "Telefone nao foi atribuido.\n";
        }
    }
};


int ex1311()
{
// identificacao
    cout << "\nExercicio 1311:\n\n";
    Contato contato1;
    contato1.readName();
    contato1.showName();
    close();
}





int ex1312()
{
    // Identifica��o
    cout << "\nExercicio 1312:\n\n";
    Contato contato1;
    contato1.readPhone();
    contato1.showPhone();
    close();


}



void ex1313()
{
// identificacao
    cout << "\nExercicio 1313:\n\n" ;

    close();

}

void ex1314()
{
// identificacao
    cout << "\nExercicio 1314:\n\n" ;
    close();
}



void ex1315()
{
// identificacao
    cout << "\nExercicio 1315:\n\n" ;
    close();
}


void ex1316()
{
// identificacao
    cout << "\nExercicio 1316:\n\n" ;
    close();
}


void ex1317()
{
// identificacao
    cout << "\nExercicio 1317:\n\n" ;
    close();
}



void ex1318()
{
// identificacao
    cout << "\nExercicio 1318:\n\n" ;
    close();
}



void ex1319()
{
    // identificacao
    cout << "\nExercicio 1319:\n\n";
    close();
}



void ex1320()
{
// identificacao
    cout << "\nExercicio 1320:\n\n";
    close();
}



void ex13E1()
{
    cout << "\nExercicio 13E1:\n\n";
    close();
}




void ex13E2()
{
    // identificacao
    cout << "\nExercicio 13E2:\n\n";
    cout << "\nAperte ENTER para continuar!\n";
    getchar();
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
            ex1311();
            break;
        case 2:
            ex1312();
            break;
        case 3:
            ex1313();
            break;
        case 4:
            ex1314();
            break;
        case 5:
            ex1315();
            break;
        case 6:
            ex1316();
            break;
        case 7:
            ex1317();
            break;
        case 8:
            ex1318();
            break;
        case 9:
            ex1319();
            break;
        case 10:
            ex1320();
            break;
        case 11:
            ex13E1();
            break;
        case 12:
            ex13E2();
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
