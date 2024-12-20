#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    printf("Enter no. of terms: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int key;
    printf("Enter element you want to search: ");
    scanf("%d",&key);
    bool flag = false;
    int idx=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=true;
            idx=i;
            break;
        }
    }
    if(flag==false) printf("%d is not present in the array ",key);
    else printf("%d is  present in the array and its index is %d ",key,idx);
    return 0;
}