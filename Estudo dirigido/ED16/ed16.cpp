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

struct IntArray {
    int* data;
    int length;
};

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


IntArray* array_push_back(IntArray* array, int value) {
    if (array == nullptr) {
        array = new IntArray;
        array->data = nullptr;
        array->length = 0;
    }
    int* new_data = (int*)realloc(array->data, (array->length + 1) * sizeof(int));
    if (new_data == nullptr) {
        cerr << "Erro ao alocar memoria!" << endl;
        return array;
    }

    array->data = new_data;
    array->data[array->length] = value;
    array->length++;

    return array;
}


int ex1611()
{
// identificacao
    cout << "\nExercicio 1611:\n\n";
    IntArray* arr = nullptr;
    arr = array_push_back(arr, 10);
    arr = array_push_back(arr, 20);
    arr = array_push_back(arr, 30);
    cout << "Array: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << arr->data[i] << " ";
    }
    close();
}

IntArray* array_pop_back(IntArray* array) {
    if (array == nullptr || array->length == 0) {
        cout << "Array está vazio, nada a remover." << endl;
        return array;
    }

    // Realoca o espaço no array para remover o último valor
    int* new_data = (int*)realloc(array->data, (array->length - 1) * sizeof(int));
    if (new_data == nullptr && array->length > 1) {
        cerr << "Erro ao realocar memoria!" << endl;
        return array;
    }

    array->data = new_data;
    array->length--;  // Decrementa o tamanho

    return array;
}

int ex1612()
{
    // Identifica��o
    cout << "\nExercicio 1612:\n\n";
    IntArray* arr = nullptr;

    arr = array_push_back(arr, 10);
    arr = array_push_back(arr, 20);
    arr = array_push_back(arr, 30);

    cout << "Preenchendo o array com push_back:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << arr->data[i] << " ";
    }
    cout << endl;

    cout << "Alterando o array com pop_back:" << endl;
    for (int i = 0; i < 3; i++) {
        arr = array_pop_back(arr);
        for (int j = 0; j < 3 - i - 1; j++) {
            cout << arr->data[j] << " ";
        }
        cout << endl;
    }

    free(arr);
    close();
}



IntArray* array_push_front(IntArray* array, int value) {
    if (array == nullptr) {
        array = new IntArray;
        array->data = nullptr;
        array->length = 0;
    }
    int* new_data = (int*)realloc(array->data, (array->length + 1) * sizeof(int));
    if (new_data == nullptr) {
        cout << "Erro ao alocar memória!" << endl;
        return array;
    }

    array->data = new_data;
    for(int i = array->length; i > 0; i--) {
        array->data[i] = array->data[i - 1];
    }
    array->data[0] = value;
    array->length++;
    return array;
}

void ex1613()
{
// identificacao
    cout << "\nExercicio 1613:\n\n" ;
    IntArray* arr = nullptr;

    arr = array_push_front(arr, 30);
    arr = array_push_front(arr, 20);
    arr = array_push_front(arr, 10);

    cout << "Preenchendo o array com push_front:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << arr->data[i] << " ";
    }
    cout << endl;
    close();

}

IntArray* array_pop_front(IntArray* array) {
    if (array == nullptr || array->length == 0) {
        cout << "Erro: Array vazio" << endl;
        return array;
    }
    for (int i = 0; i < array->length - 1; i++) {
        array->data[i] = array->data[i + 1];
    }
    int* new_data = (int*)realloc(array->data, (array->length - 1) * sizeof(int));
    if (new_data == nullptr && array->length > 1) {
        cout << "Erro ao alocar memoria!" << endl;
        return array;
    }

    array->data = new_data;
    array->length--;
    return array;
}

void ex1614()
{
// identificacao
    cout << "\nExercicio 1614:\n\n" ;
    IntArray* arr = nullptr;
    arr = array_push_front(arr, 30);
    arr = array_push_front(arr, 20);
    arr = array_push_front(arr, 10);
    cout << "Preenchendo o array com push_front:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << arr->data[i] << " ";
    }
    cout << endl;
    cout << "Realizando o pop front:" << endl;
    arr = array_pop_front(arr);
    cout << "Apos a primeira remocao:" << endl;
    for (int i = 0; i < arr->length; i++) {
        cout << arr->data[i] << " ";
    }
    cout << endl;
    arr = array_pop_front(arr);
    cout << "Apos a segunda remocao:" << endl;
    for (int i = 0; i < arr->length; i++) {
        cout << arr->data[i] << " ";
    }
    cout << endl;
    arr = array_pop_front(arr);
    cout << "Apos a terceira remocao:" << endl;
    if (arr->length == 0) {
        cout << "Array esta vazio." << endl;
    }
    close();
}


IntArray* array_push_mid(IntArray* array, int value) {
    if (array == nullptr) {
        array = new IntArray;
        array->data = nullptr;
        array->length = 0;
    }
    int* new_data = (int*)realloc(array->data, (array->length + 1) * sizeof(int));
    if (new_data == nullptr) {
        cout << "Erro ao alocar memoria!" << endl;
        return array;
    }

    array->data = new_data;
    int mid = array->length / 2;
    for (int i = array->length; i > mid; i--) {
        array->data[i] = array->data[i - 1];
    }
    array->data[mid] = value;
    array->length++;
    return array;
}

void ex1615()
{
// identificacao
    cout << "\nExercicio 1615:\n\n" ;
    IntArray* arr = nullptr;
    arr = array_push_front(arr, 30);
    arr = array_push_front(arr, 10);
    arr = array_push_mid(arr, 20);

    // Exibir o resultado
    cout << "Array apos insercoes no meio:" << endl;
    for (int i = 0; i < arr->length; i++) {
        cout << arr->data[i] << " ";
    }
    cout << endl;
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
            ex1611();
            break;
        case 2:
            ex1612();
            break;
        case 3:
            ex1613();
            break;
        case 4:
            ex1614();
            break;
        case 5:
            ex1615();
            break;
        case 6:
            ex1616();
            break;
        case 7:
            ex1617();
            break;
        case 8:
            ex1618();
            break;
        case 9:
            ex1619();
            break;
        case 10:
            ex1620();
            break;
        case 11:
            ex16E1();
            break;
        case 12:
            ex16E2();
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
