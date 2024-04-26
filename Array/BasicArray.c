#include<stdio.h>
int main()
{
    int arr[5]; 
    //arr[4] = 100; // {2,4,6,8,100}
    for(int i=0;i<=4;i++)
    {
        printf("\nEnter element number %d ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    //printf("%d",arr[4]);
    // int arr[5];
    // arr[0] = 1;
    // arr[1] = 3;
    // arr[2] = 4;
    // arr[3] = 10;
    // arr[4] = 2;
    // printf("%d",arr[3]);
    // float a[3] = {1.2,3.4,5.7};
    // printf("%f",a[2]);
    // char arr[4] = {'a','n','Y','%'};
    // printf("%c",arr[3]);
    return 0;
}