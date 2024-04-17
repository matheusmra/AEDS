#include<stdio.h>
int main(){
    int n;
    int count=0;
    scanf("%d", &n);
while(n>0){
    count=0;
    for(int i = 1; i<=n; i++){
        if((n%i)==0){
            count++;
        }
    }
    if(count==2){
    printf("Primo\n");
    }
    else{
    printf("Nao primo\n");
    }
    scanf("%d", &n);

}
}
