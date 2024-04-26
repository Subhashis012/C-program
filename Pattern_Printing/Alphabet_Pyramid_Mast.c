#include<stdio.h>
int main()
{
	int n;
	printf("Enter the no. of row: ");
	scanf("%d",&n);
	int nsp=n-1;
	for(int i=1;i<=n;i++)
	{
		int a=i-1;
		for(int l=1;l<=nsp;l++)
		{
			printf(" ");
		}
		for(int j=1;j<=i;j++)
		{
			char ch=(char)(j+64);
			printf("%c",ch);
		}
		for(int k=1;k<=i-1;k++)
		{
			char ch=(char)(a+64);
			printf("%c",ch);
			a--;
		}
		nsp--;
		printf("\n");
	}
	return 0;
}