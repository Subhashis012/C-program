#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    int sum;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    sum=add(a,b);
    printf("%d",sum);
    return 0;
}