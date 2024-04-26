#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter the rows no.: ");
    scanf("%d", &n);
    printf("Enter the columns no.: ");
    scanf("%d", &m);
    int arr[n][m];
    int maxSum = arr[0][0];
    int x = 0;
    printf("Enter elements of the matrix\n ");
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
        if(maxSum<sum)
        {
            maxSum = sum;
            x = i;
        }
    }
    printf("Row with the maximum sum: %d and its index is:%d", maxSum,x+1);
    return 0;
}