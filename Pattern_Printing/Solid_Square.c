#include <stdio.h>
int main()
{
    int m;
    printf("Enter the num. of row: ");
    scanf("%d", &m);
    for (int i = 1; i <= m; i++)
    {
        for (int i = 1; i <= m; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}