#include <stdio.h>
int main()
{
    int a[10];
    int i, s = 0, m;
    float avg;
    for (i = 0; i < 10; i++)
    {
        printf("Enter the value of elements: ");
        scanf("%d", &a[i]);
        s = s + a[i];
    }
    avg = (float)s / 10;
    m = a[0];
    for (i = 1; i < 10; i++)
    {
        if (a[i] > m)
            m = a[i];
    }
    printf("\nThe average is:%.2f", avg);
    printf("\nThe maximum number is:%d", m);
    return 0;
}