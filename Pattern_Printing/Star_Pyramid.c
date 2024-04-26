#include<stdio.h>
int main()
{
	int n;
	printf("Enter no. of lines: ");
	scanf("%d",&n);
	// *********
	// **** ****
	// ***   ***
	// **     **
	// *       *
	// n=4
	int nst=n;
	int nsp=1;
	for(int i=1;i<=2*n+1;i++){ //Peheli line ke liye
		printf("*");
	}
	printf("\n");
	for(int i=1;i<=n;i++){
		for(int j=1;j<=nst;j++){  // stars
			printf("*");
		}
		for(int k=1;k<=nsp;k++){  // spaces
			printf(" ");
		}
		for(int j=1;j<=nst;j++){  // stars
			printf("*");
		}
		nst--;
		nsp+=2;
		printf("\n");
	}
	return 0;
}