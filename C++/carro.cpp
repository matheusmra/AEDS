#include <iostream>
#include <string>

using namespace std;

class Carro {
public:
    string marca;
    string modelo;
    int ano;
    int valor;

    void ini(string n, int i, int v, string e);
};

void Carro::ini(string n, int i, int v, string e) {
    this->marca = n;
    this->ano = i;
    this->valor = v;
    this->modelo = e;
}

int main() {
    Carro c1, c2;

    string marca;
    string modelo;
    int ano;
    int valor;

    cout << "Digite a marca do Carro 1: ";
    getline(cin, marca);
    cout << "Digite o modelo do Carro 1: ";
    getline(cin, modelo);
    cout << "Digite o ano do Carro 1: ";
    cin >> ano;
    cin.ignore();
    cout << "Digite o valor do Carro 1: ";
    cin >> valor;
    c1.ini(marca, ano, valor, modelo);
    cin.ignore();
    cout << "Digite a marca do Carro 2: ";
    getline(cin, marca);
    cout << "Digite o modelo do Carro 2: ";
    getline(cin, modelo);
    cout << "Digite o ano do Carro 2: ";
    cin >> ano;
    cin.ignore();
    cout << "Digite o valor do Carro 2: ";
    cin >> valor;
    c2.ini(marca, ano, valor, modelo);


    cout << "Carro 1:" << endl
     << "Marca:"<< c1.marca << endl
     << "Modelo:"<< c1.modelo << endl
     << "Ano:"<< c1.ano << endl
     << "R$:"<< c1.valor << endl;

    cout << "\nCarro 2:"<< endl
     << "Marca:"<< c2.marca << endl
     << "Modelo:"<< c2.modelo << endl
     << "Ano:"<< c2.ano << endl
     << "R$:"<< c2.valor << endl;
    return 0;
}
