#include <stdio.h>
int fatorial(int n){
    if(n == 0  || n == 1){
    return 1;
    }
    else{
    return n * fatorial(n-1);
    }
}
int main(){
    int numero = 0;
    scanf("%d", &numero);
    printf("Fatorial de %d = %d", numero , fatorial(numero));

}
