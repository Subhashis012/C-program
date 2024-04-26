#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int permudation(int n,int r){
    int nPr=factorial(n)/factorial(n-r);
    return nPr;
}
int main(){
    int n,r;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter r ");
    scanf("%d",&r);
    int nPr = permudation(n,r);
    printf("%d",nPr);
    return 0;
}