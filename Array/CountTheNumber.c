#include <stdio.h>
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int x,count=0;
    printf("Enter the number you check the element in given array greater than a given number: ");
    scanf("%d",&x);
    for(int i=0;i<=6;i++)
    {
        if(arr[i]>x) count++;
    }
    printf("The count is: %d",count);
    return 0;
}
