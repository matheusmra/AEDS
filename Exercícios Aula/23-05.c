#include <stdio.h>
int fat(int);
void contagemRegressiva(int n);
int pot(int v1,int v2);

int main(){
    printf("%d", fat(5));
    contagemRegressiva(10);
    printf("\n%d", pot(3,4));
}
int fat (int n){
    if (n==0)
    return 1;
    return n*fat(n-1);

}

void contagemRegressiva(int n){
    if(n<0)
    return;
    printf("\n %d", n);
    contagemRegressiva(n-1);


}

int pot(int x,int n){
        if(n==0)
        return 1;
        return x*pot(x,n-1);
}
