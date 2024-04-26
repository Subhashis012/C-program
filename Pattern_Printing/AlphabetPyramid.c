#include<stdio.h>
int main()
{
	int n;
	printf("Enter the no. of row: ");
	scanf("%d",&n);
	int nst=1;
	for(int i=1;i<=n;i++){
		for(int j=n-i;j>=1;j--){
			printf(" ");
		}
		int a=1;
		for(int k=1;k<=nst;k++)
		{
			char ch=(char)(a+64);
			printf("%c",ch);
			a++;
		}
		nst += 2;
		printf("\n");
	}
	return 0;
}