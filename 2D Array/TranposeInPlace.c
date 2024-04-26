#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows/columns: ");
    scanf("%d", &n);
    int arr[n][n]; // n*n total elements
    // Input 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    // Transpose
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        // for(int j=0;j<=i;j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    // Output
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }    
    return 0;
}