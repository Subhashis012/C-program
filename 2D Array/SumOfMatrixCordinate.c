#include<stdio.h>
int main()
{
    int n, m;
    printf("Enter the rows no.: ");
    scanf("%d", &n);
    printf("Enter the columns no.: ");
    scanf("%d", &m);
    int arr[n][m];
    printf("Enter elemnents of the array:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Enter coordinates you want to sum\n");
    int a,b,c,d;
    printf("Enter first coordinates: ");
    scanf("%d%d",&a,b);
    printf("Enter second coordinates: ");
    scanf("%d%d",&c,&d);
        int sum = 0;
        for (int i = a; i <= c; i++) {
            for (int j = b; j <= d; j++) {
                sum += arr[i][j];
            }
        }
        printf("Sum of the rectangle: %d\n", sum);
    return 0;
}