#include <stdio.h>
int main()
{
    int m;
    printf("Enter the num. of row: ");
    scanf("%d", &m);
    for (int i = 1; i <= m; i++)
    {
        int a=1;
        for (int i = 1; i <= m; i++)
        {
            int d = a + 64;
            char ch = (char)d;
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}