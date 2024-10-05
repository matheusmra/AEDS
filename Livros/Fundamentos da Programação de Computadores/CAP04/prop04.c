int maior(int n1, int n2, int n3){
    if(n1 > n2 && n1 > n3){
    return n1;
    }else{
    if(n2 > n1 && n2 > n3){
    return n2;
    }else{
    return n3;
    }
}
}

int main(){
    int n1 = 0, n2 = 0, n3 = 0;
    scanf("%d %d %d", &n1, &n2, &n3);
    int res = maior(n1,n2, n3);
    printf("%d", res);

}
