#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter the num. of row: ");
    scanf("%d", &m);
    printf("Enter the num. of column: ");
    scanf("%d", &n);
    for (int i = 1; i <= m; i++)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}