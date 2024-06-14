#include <iostream>
using namespace std;
class Quadrado {
private:
int lado;
public:
Quadrado(int l): lado(l) {}
int getLado() {
return lado;
}
int perimetro() {
return 4*lado;
}
int area() {
return lado * lado;
}
void print() {
cout << "[Quadrado, lado=" << this->lado << "]" <<
endl;
}
};
    int main(){
//Constroi quadrado de lado 10
Quadrado q(10);
//Imprime o lado do quadrado
cout << "lado do quadrado = " << q.getLado()
<< endl;
//Imprime o perimetro do quadrado
cout << "perimetro do quadrado = " <<
q.perimetro() << endl;
//Imprime o area do quadrado
cout << "area do quadrado = " << q.area() <<
endl;
//Imprime o quadrado
q.print();
return 0;
}
