#include<stdio.h>
int main()
{
	int n;
	printf("Enter the no. of row: ");
	scanf("%d",&n);
	int a;
	for(int i=1;i<=n;i++)
	{
		if(i%2!=0) a=1;  //Ei por por 2to line eta hochhe start hochhe first e 1 hobe naki 0 and Odd hole 1 print korbe and even hole 0 print korbe
		else a=0;
		for(int j=1;j<=i;j++)
		{
			printf("%d ",a);
			if(a==0) a=1; //Ei por por 2to line switch korar jonne 0 hobe naki 1 mane 0 thakle 1 kore debe and 1 thakle setake 0 kore debe and eta inner loop r moddhei run korebe
			else a=0;
		}
		printf("\n");
	}
	return 0;
}