#include <stdio.h>

int menor(int n1, int n2){
    if(n1 > n2){
    return n2;
    }else{
    return n1;
    }
}

int main(){
    int n1 = 0, n2 = 0;
    scanf("%d %d", &n1, &n2);
    int res = menor(n1,n2);
    printf("%d", res);

}
