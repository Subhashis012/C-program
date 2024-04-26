#include<stdio.h>
int main()
{
    int arr[8] = {1,2,3,4,5,6,7,8};
    int totalTriplets = 0;
    int x;
    printf("Enter the number you found: ");
    scanf("%d",&x);
    for(int i=0;i<8;i++)
    {
        for(int j=i+1;j<=7;j++)
        {
            for(int k = j+1;k<=7;k++)
            {
                if(arr[i]+arr[j]+arr[k]==x)
                {
                    totalTriplets++;
                    printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
    printf("%d",totalTriplets);
    return 0;
}