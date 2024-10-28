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
using namespace std;
// Tamanho max string
const int TAM_STR = 80;
// Função para mostrar o menu de opções
void menuOpcoes() {
   cout << "\nEscolha alguma das opcoes a seguir:\n\n";
   cout << "  0 - Encerrar programa\n";
   cout << "  1 - Exercicio 1211\n";
   cout << "  2 - Exercicio 1212\n";
   cout << "  3 - Exercicio 1213\n";
   cout << "  4 - Exercicio 1214\n";
   cout << "  5 - Exercicio 1215\n";
   cout << "  6 - Exercicio 1216\n";
   cout << "  7 - Exercicio 1217\n";
   cout << "  8 - Exercicio 1218\n";
   cout << "  9 - Exercicio 1219\n";
   cout << "  10 - Exercicio 1220\n";
   cout << "  11 - Exercicio 12E1\n";
   cout << "  12 - Exercicio 12E2\n";
} // fim menuOpcoes()
class Matrix{
public:
    int  rows = 0;
    int  cols = 0;
    int** data = NULL ;
    Matrix(int m, int n) : rows(m), cols(n) {
        this->rows = m;
        this->cols = n;
        data = new int*[this->rows];
        for (int i = 0; i < this->rows; ++i) {
            data[i] = new int[this->cols];
        }
    }
    ~Matrix(){
        delete[] data;
    }

void randomIntGenerate(int inferior, int superior) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            data[i][j] = rand() % (superior - inferior + 1) + inferior;
        }
    }
}

void writeToFile(const char* filename) {
        std::ofstream file(filename);
        if (file.is_open()) {
            file << rows << " " << cols << "\n";
            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j) {
                    file << data[i][j] << " ";
                }
                file << "\n";
            }
            file.close();
            cout << "Matriz gerada e gravada no arquivo \"" << filename << "\".\n";
        } else {
            cout << "Erro ao abrir o arquivo.\n";
        }
    }


};

// Função para o exercício 1111
// ler a quantidade de elementos ( N ) a serem gerados;
// gerar essa quantidade ( N ) de valores aleatórios
// dentro do intervalo e armazená-los em arranjo;
// gravá-los, um por linha, em um arquivo ("DADOS.TXT").
// A primeira linha do arquivo deverá informar a quantidade
// de números aleatórios ( N ) que serão gravados em seguida.
// DICA: Usar a função rand( ), mas tentar limitar valores muito grandes.
// Exemplo: valor = arranjo.randomIntGenerate ( inferior, superior );


int ex1211() {
// identificacao
    cout << "\nExercicio 1211:\n\n";
    int l = 0, c = 0;
    cout << "Digite o numero de linhas:";
    cin >> l;
    cout << "Digite o numero de colunas";
    cin >> c;
    Matrix matrix(l,c);
    matrix.randomIntGenerate(1,100);
    matrix.writeToFile("DADOS.TXT");
    getchar();
    cout << "\nAperte ENTER para continuar!\n";
    getchar();
}
// fim exercicio1011

// Função para o exercício 1012
// procurar o maior valor par em um arranjo.
// Para testar, receber um nome de arquivo como parâmetro e
// aplicar a função sobre o arranjo com os valores lidos;
// DICA: Usar o primeiro valor par, se houver, como referência inicial.
// Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
// maior = arranjo.searchFirstOdd ( );




int ex1212() {
    // Identificação
    cout << "\nExercicio 1212:\n\n";

    cout << "\nAperte ENTER para continuar!\n";
    getchar(); // Pausa para esperar ENTER

    return 0; // Encerra com sucesso
}// Fim da função ex1012

// Função para o exercício 1013
// procurar o menor valor par múltiplo de 3 em um arranjo.
// Para testar, receber um nome de arquivo como parâmetro e
// aplicar a função sobre o arranjo com os valores lidos;
// DICA: Usar o primeiro valor par múltiplo de 3, se houver, como referência inicial.
// Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
// menor = arranjo.searchFirstEvenx3 ( );



void ex1213() {
// identificacao
    cout << "\nExercicio 1213:\n\n" ;
    cout << "\nAperte ENTER para continuar!\n";
    getchar(); // Pausa para esperar ENTER

}// Fim da função ex1013

// Função para o exercício 1014
// somar todos os valores em um arranjo entre duas posições dadas.
// Para testar, receber um nome de arquivo como parâmetro e
// aplicar a função sobre o arranjo com os valores lidos;
// Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
// soma = arranjo.addInterval ( inicio, fim );

void ex1214() {
// identificacao
    cout << "\nExercicio 1214:\n\n" ;

    cout << "\nAperte ENTER para continuar!\n";
    getchar();
    getchar();
}// Fim da função ex1014

// Função para o exercício 1015
// achar a média dos valores em um arranjo entre duas posições dadas.
// Para testar, receber um nome de arquivo como parâmetro e
// aplicar a função sobre o arranjo com os valores lidos;
// Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
// media = arranjo.averageInterval ( inicio, fim );



void ex1215() {
// identificacao
    cout << "\nExercicio 1215:\n\n" ;

    cout << "\nAperte ENTER para continuar!\n";
    getchar();
    getchar();
}// Fim da função ex0915

// Função para o exercício 0916
// verificar se todos os valores são positivos em um arranjo.
// Para testar, ler o arquivo ("DADOS.TXT")
// armazenar os dados em um arranjo.
// Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
// teste = arranjo.negatives ( );


void ex1216() {
// identificacao
    cout << "\nExercicio 1216:\n\n" ;

    cout << "\nAperte ENTER para continuar!\n";
    getchar(); // Pausa para esperar ENTER
}// Fim da função ex1016

// Função para o exercício 1017
// dizer se está ordenado, ou não, em ordem decrescente.
// DICA: Testar se não está desordenado, ou seja,
// se existe algum valor que seja maior que o seguinte.
// Não usar break !
// Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
// teste = arranjo.isDecrescent ( );


void ex1217() {
// identificacao
    cout << "\nExercicio 1217:\n\n" ;

    cout << "\nAperte ENTER para continuar!\n";
    getchar(); // Pausa para esperar ENTER
}// Fim da função ex0917

// Função para o exercício 1018
// dizer se determinado valor está presente em arranjo,
// entre duas posições indicadas.
// Para testar, ler o arquivo ("DADOS.TXT"),
// e armazenar os dados em arranjo;
// ler do teclado um valor inteiro para ser procurado;
// determinar se o valor procurado existe no arranjo.
// Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
// existe = arranjo.searchInterval ( procurado, inicio, fim );



void ex1218() {
// identificacao
    cout << "\nExercicio 1218:\n\n" ;

    cout << "\nAperte ENTER para continuar!\n";
    getchar();
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



void ex1219() {
    // identificacao
    cout << "\nExercicio 1219:\n\n";

    cout << "\nAperte ENTER para continuar!\n";
    getchar();
    getchar();
}// Fim da função ex0919

// Função para o exercício 1020
// colocar valores em arranjo em ordem decrescente,
// mediante trocas de posições, até ficar totalmente ordenado.
// Para testar, ler o arquivo ("DADOS.TXT"),
// e armazenar os dados em arranjo.
// Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
// arranjo.sortDown ( );



void ex1220() {
// identificacao
    cout << "\nExercicio 1120:\n\n";

    cout << "\nAperte ENTER para continuar!\n";
    getchar();
    getchar();
}// Fim da função ex0320

// Função para o exercício 10E1
// Incluir uma função/operador (11E1) para
// dizer se dois arranjos são diferentes, pelo menos em uma posição.



void ex12E1(){
    cout << "\nExercicio 12E1:\n\n";

}
// fim exercicio09E1
// Função para o exercício 10E2
// calcular as diferenças entre dois arranjos, posição por posição,
// caso tenham tamanhos iguais.



void ex12E2(){
    // identificacao
    cout << "\nExercicio 12E2:\n\n";
    cout << "\nAperte ENTER para continuar!\n";
    getchar();
} // fim função 03E2

// Função principal
int main(void) {
    int opcao;

    do {
        menuOpcoes(); // Chama a função que exibe as opções

        cout << "\nOpcao = ";
        cin >> opcao;
        getchar(); // Limpar o buffer de entrada

        // Executar a opção escolhida
        switch (opcao) {
            case 0: break;
            case 1: ex1211(); break;
            case 2: ex1212(); break;
            case 3: ex1213(); break;
            case 4: ex1214(); break;
            case 5: ex1215(); break;
            case 6: ex1216(); break;
            case 7: ex1217(); break;
            case 8: ex1218(); break;
            case 9: ex1219(); break;
            case 10: ex1220(); break;
            case 11: ex12E1(); break;
            case 12: ex12E2(); break;
            default:
                cout << "\nERRO: OPCAO INVALIDA\n\n";
                break;
        } // fim switch

    } while (opcao != 0);

    cout << "\nAperte ENTER para terminar!\n";
    getchar();

    return 0;
} // Fim da função principal
