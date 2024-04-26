# include <stdio.h>
void swap(int* x,int* y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main()
{
    int a,b;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("After swapping\n");
    printf("1st number is:%d\n",a);
    printf("2nd number is:%d",b);
    return 0;
}