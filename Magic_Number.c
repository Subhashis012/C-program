#include<stdio.h>
int main(){
    int n,temp,r1,r2,sum=0,rev=0,p,mul;
    printf("Enter no: ");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        r1=temp%10;
        sum=sum+r1;
        temp=temp/10;
    }
    printf("The sum of digit is:%d\n",sum);
    p=sum;
    while (sum>0)
    {
        r2=sum%10;     
        rev=rev*10+r2; 
        sum=sum/10; 
    }
    printf("The reverse number is:%d\n",rev);
    sum=p;
    mul=sum*rev;  
    if(n==mul)
    printf("The magic no. is:%d",mul);
    else
    printf("The magic no. is not:%d",mul);
    return 0;
}