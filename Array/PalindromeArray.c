#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n); 
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the element of the array: ");
        scanf("%d",&arr[i]);
    }
    int i=0,j=n-1,flag=0; 
    while(i<j) 
    {           
        if(arr[i]!=arr[j])
        {
            flag=1;
            break;
        }
        i++;
        j--;
    }
    if(flag==0) printf("Array is palindrome");
    else printf("Array is not palindrome");

    return 0;
}