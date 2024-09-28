#include <stdio.h>

int potencia(int x, int y){
    if(y == 0){
    return 1;
    }else{
    return x * potencia(x, y-1);
    }

}
int main(){
    int x = 0, y = 0;
    scanf("%d %d", &x, &y);
    printf("%d Elevado a %d = %d", x, y , potencia(x,y));

}
