#include<stdio.h>
int main()
{
	int n;
	printf("Enter the no. of row: ");
	scanf("%d",&n);
	// 1234567
	// 123 567
	// 12   67
	// 1     7
	//n=4
	int nst=n;
	int nsp=1;
	for(int i=1;i<=2*n+1;i++){ //Peheli line ke liye
		printf("%d",i);
	}
	printf("\n");
	for(int i=1;i<=n;i++){
		int a=1;
		for(int j=1;j<=nst;j++){  // stars
			printf("%d",a);
			a++;
		}
		for(int k=1;k<=nsp;k++){  // spaces
			printf(" ");
			a++;
		}
		for(int j=1;j<=nst;j++){  // stars
			printf("%d",a);
			a++;
		}
		nst--;
		nsp+=2;
		printf("\n");
	}
	return 0;
}