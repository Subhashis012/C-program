#include<stdio.h>
int main()
{
    int student;
    printf("Enter student nos: ");
    scanf("%d",&student);
    int arr[student][3];
    for(int i=0;i<student;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter marks: ");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<student;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}