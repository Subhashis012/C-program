#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[7] = {10,4,2,8,19,5,21};
    //int max = arr[0];
    int min = INT_MAX;
    for(int i=0;i<7;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    printf("%d",min);
    return 0;
}