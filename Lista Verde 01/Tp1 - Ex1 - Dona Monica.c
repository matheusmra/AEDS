#include<stdio.h>
int main(){
   int M,A,B,C;
   scanf("%d", &M);
   scanf("%d", &A);
   scanf("%d", &B);
if(40 <= M && M <= 110 && 1 <= A && A < M && 1 <= B && B < M && A != B){
    C = M - (A + B);
if(C > A && C > B){
    printf("%d",C);
}
if(C < A && A> B){
    printf("%d", A);
}
if(B > A && B >C){
    printf("%d", B);
}
}
}
