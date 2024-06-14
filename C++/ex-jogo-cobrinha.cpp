#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

bool fimJogo;
const int largura = 20;
const int altura = 10;
int x, y;
int frutaX, frutaY;
int pts;
int cX[100], cY[100];
int nC;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

void Jogo(){
    fimJogo = false;
    dir = STOP;
    x = largura / 2;
    y = altura / 2;
    frutaX = rand() % largura;
    frutaY = rand() % altura;
    pts = 0;
    }

void Aleatorio(){
    system("cls");

    for(int i = 0; i < largura +2; i++)
        cout << "#";
    cout << endl;

    for (int i=0; i< altura; i++) {
        for (int j=0; j< largura; j++){
        if (j == 0)
            cout << "#";

        if(i == y && j == x)
            cout << "O"; //Cabeça cobra
        else if( i == frutaY && j == frutaX)
            cout << "F";
        else {
            bool printC = false;
            for (int k =0; k < nC; k++) {
                if (cX[k] == j && cY[k] == i) {
                    cout << "o";
                    printC = true;
                }
            }
            if (!printC)
                cout << " ";
          }

          if (j == largura -1)
            cout << "#";
          }
          cout << endl;
        }

        for (int i = 0; i < largura +2; i++)
            cout << "#";
        cout << endl;

        cout << "Pontos:" << pts << endl;

    }
void Input() {
    if (_kbhit()) {
     switch (_getch()) {
        case 'a':
            dir = LEFT;
            break;
        case 'd':
            dir = RIGHT;
            break;
        case 'w':
            dir = UP;
            break;
        case 's':
            dir = DOWN;
            break;
        case 'x':
            fimJogo = true;
            break;
        }
    }
}

void Logica() {
    int prevX = cX[0];
    int prevY = cY[0];
    int prev2X, prev2Y;

    cX[0] = x;
    cY[0] = y;

    for (int i = 1; i < nC; i++) {
        prev2X = cX[i];
        prev2Y = cY[i];
        cX[i] = prevX;
        cY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }
    switch (dir) {
        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
        default:
            break;
        }
    if (x < 0 || x >= largura || y < 0 || y >= altura)
        fimJogo = true;

    for ( int i = 0; i < nC; i++)
        if(cX[i] == x && cY[i] == y)
            fimJogo = true;
    if(x == frutaX && y == frutaY) {
        pts += 10;
        frutaX = rand() % largura;
        frutaY = rand() % altura;
        nC++;
    }
}

int main() {
    Jogo();
    while (!fimJogo){
    Aleatorio();
    Input();
    Logica();
    Sleep(10);
    }
    return 0;
}
