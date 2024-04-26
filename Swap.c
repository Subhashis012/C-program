#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    temp=a; // 5 c=5
    a=b; // 10 a=10
    b=temp; // 5 b=5
    // a=a+b; // a=5,b=10 15
    // b=a-b; // 15 ,10 5
    // a=a-b; // 15,5 10
    printf("After swapping:%d,%d",a,b);
    return 0;
}