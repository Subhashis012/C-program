#include <stdio.h>
int main()
{
    int a[100];
    int n,  i=0, s = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        a[i] = n % 2; //13%2=1-->a[0],6%2=0-->a[1],3%2=1-->a[2],1%2=1-->a[3]
        i++;        //1,2,3,4
        n = n / 2;  // 6,3,1,0
    }
    for (i = i - 1; i >= 0; i--)  //3,2,1,0
    {                           
        s = s * 10 + a[i];  //1101
    }
    printf("Binary no.:%d", s);
    return 0;
}