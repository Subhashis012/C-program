#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],c[100];
    int n,i,j,k;
    printf("Enter a full name: ");
    gets(a);
    n=strlen(a);
    for(i=n-1,j=0;a[i]!=' ';i--,j++)  // 19 0 18 1 17 2 16 3 15 4
    {
        b[j]=a[i];                    // BOSE                      
    }
    b[j]='\0';
    strrev(b);
    c[0]=a[0];
    c[1]='.';
    j=2;
    for(k=1;k<i;k++)
    {
        if(a[k]==' ')
        {
            c[j]=a[k+1];
            j++;
            c[j]='.';
            j++;
        }
    }
    c[j]='\0';
    strcat(c,b);
    puts(c);
    return 0;
}