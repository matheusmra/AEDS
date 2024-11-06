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
// Fun��o para mostrar o menu de op��es

void close(){
    cout << "\nAperte ENTER para continuar!\n";
    getchar();
    getchar();
}
void menuOpcoes() {
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


// Fun��o para o exerc�cio 1111
// ler a quantidade de elementos ( N ) a serem gerados;
// gerar essa quantidade ( N ) de valores aleat�rios
// dentro do intervalo e armazen�-los em arranjo;
// grav�-los, um por linha, em um arquivo ("DADOS.TXT").
// A primeira linha do arquivo dever� informar a quantidade
// de n�meros aleat�rios ( N ) que ser�o gravados em seguida.
// DICA: Usar a fun��o rand( ), mas tentar limitar valores muito grandes.
// Exemplo: valor = arranjo.randomIntGenerate ( inferior, superior );

int ex1311() {
// identificacao
    cout << "\nExercicio 1311:\n\n";
    close();
}
// fim exercicio1011

// Fun��o para o exerc�cio 1012
// procurar o maior valor par em um arranjo.
// Para testar, receber um nome de arquivo como par�metro e
// aplicar a fun��o sobre o arranjo com os valores lidos;
// DICA: Usar o primeiro valor par, se houver, como refer�ncia inicial.
// Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
// maior = arranjo.searchFirstOdd ( );




int ex1312() {
    // Identifica��o
    cout << "\nExercicio 1312:\n\n";
    close();


}// Fim da fun��o ex1012

// Fun��o para o exerc�cio 1013
// procurar o menor valor par m�ltiplo de 3 em um arranjo.
// Para testar, receber um nome de arquivo como par�metro e
// aplicar a fun��o sobre o arranjo com os valores lidos;
// DICA: Usar o primeiro valor par m�ltiplo de 3, se houver, como refer�ncia inicial.
// Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
// menor = arranjo.searchFirstEvenx3 ( );



void ex1313() {
// identificacao
    cout << "\nExercicio 1313:\n\n" ;

    close();

}// Fim da fun��o ex1013

// Fun��o para o exerc�cio 1014
// somar todos os valores em um arranjo entre duas posi��es dadas.
// Para testar, receber um nome de arquivo como par�metro e
// aplicar a fun��o sobre o arranjo com os valores lidos;
// Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
// soma = arranjo.addInterval ( inicio, fim );

void ex1314() {
// identificacao
    cout << "\nExercicio 1314:\n\n" ;
    close();
}// Fim da fun��o ex1014

// Fun��o para o exerc�cio 1015
// achar a m�dia dos valores em um arranjo entre duas posi��es dadas.
// Para testar, receber um nome de arquivo como par�metro e
// aplicar a fun��o sobre o arranjo com os valores lidos;
// Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
// media = arranjo.averageInterval ( inicio, fim );



void ex1315() {
// identificacao
    cout << "\nExercicio 1315:\n\n" ;
    close();
}// Fim da fun��o ex0915

// Fun��o para o exerc�cio 0916
// verificar se todos os valores s�o positivos em um arranjo.
// Para testar, ler o arquivo ("DADOS.TXT")
// armazenar os dados em um arranjo.
// Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
// teste = arranjo.negatives ( );


void ex1316() {
// identificacao
    cout << "\nExercicio 1316:\n\n" ;
    close();
}// Fim da fun��o ex1016

// Fun��o para o exerc�cio 1017
// dizer se est� ordenado, ou n�o, em ordem decrescente.
// DICA: Testar se n�o est� desordenado, ou seja,
// se existe algum valor que seja maior que o seguinte.
// N�o usar break !
// Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
// teste = arranjo.isDecrescent ( );


void ex1317() {
// identificacao
    cout << "\nExercicio 1317:\n\n" ;
    close();
}// Fim da fun��o ex0917

// Fun��o para o exerc�cio 1018
// dizer se determinado valor est� presente em arranjo,
// entre duas posi��es indicadas.
// Para testar, ler o arquivo ("DADOS.TXT"),
// e armazenar os dados em arranjo;
// ler do teclado um valor inteiro para ser procurado;
// determinar se o valor procurado existe no arranjo.
// Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
// existe = arranjo.searchInterval ( procurado, inicio, fim );



void ex1318() {
// identificacao
    cout << "\nExercicio 1318:\n\n" ;
    close();
}// Fim da fun��o ex1018

// Fun��o para o exerc�cio 0919
// escalar dados em arranjo, entre duas posi��es dadas,
// multiplicando cada valor por uma constante.
// Para testar, ler o arquivo ("DADOS.TXT"),
// e armazenar os dados em arranjo;
// ler do teclado um valor inteiro para indicar a constante.
// Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
// novo = arranjo.scalar( constante, inicio, fim );



void ex1319() {
    // identificacao
    cout << "\nExercicio 1319:\n\n";
    close();
}// Fim da fun��o ex0919

// Fun��o para o exerc�cio 1020
// colocar valores em arranjo em ordem decrescente,
// mediante trocas de posi��es, at� ficar totalmente ordenado.
// Para testar, ler o arquivo ("DADOS.TXT"),
// e armazenar os dados em arranjo.
// Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
// arranjo.sortDown ( );



void ex1320() {
// identificacao
    cout << "\nExercicio 1320:\n\n";
    close();
}// Fim da fun��o ex0320

// Fun��o para o exerc�cio 10E1
// Incluir uma fun��o/operador (11E1) para
// dizer se dois arranjos s�o diferentes, pelo menos em uma posi��o.



void ex13E1(){
    cout << "\nExercicio 13E1:\n\n";
    close();
}
// fim exercicio09E1
// Fun��o para o exerc�cio 10E2
// calcular as diferen�as entre dois arranjos, posi��o por posi��o,
// caso tenham tamanhos iguais.



void ex13E2(){
    // identificacao
    cout << "\nExercicio 13E2:\n\n";
    cout << "\nAperte ENTER para continuar!\n";
    getchar();
} // fim fun��o 03E2

// Fun��o principal
int main(void) {
    int opcao;

    do {
        menuOpcoes(); // Chama a fun��o que exibe as op��es

        cout << "\nOpcao = ";
        cin >> opcao;
        getchar(); // Limpar o buffer de entrada

        // Executar a op��o escolhida
        switch (opcao) {
            case 0: break;
            case 1: ex1311(); break;
            case 2: ex1312(); break;
            case 3: ex1313(); break;
            case 4: ex1314(); break;
            case 5: ex1315(); break;
            case 6: ex1316(); break;
            case 7: ex1317(); break;
            case 8: ex1318(); break;
            case 9: ex1319(); break;
            case 10: ex1320(); break;
            case 11: ex13E1(); break;
            case 12: ex13E2(); break;
            default:
                cout << "\nERRO: OPCAO INVALIDA\n\n";
                break;
        } // fim switch

    } while (opcao != 0);

    cout << "\nAperte ENTER para terminar!\n";
    getchar();

    return 0;
} // Fim da fun��o principal
