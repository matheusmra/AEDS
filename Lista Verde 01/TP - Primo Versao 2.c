#include<stdio.h>
int main(){
int x1,x2;
int cont=0;

scanf("%d %d",&x1,&x2);

for(int i=x1+1; i<x2; i++){
    cont=0;
    for(int j=1; j<x2; j++){
        if(i%j==0){
            cont++;
        }
    }
    if(cont==2){
        printf("%d ",i);
            }
}
}
