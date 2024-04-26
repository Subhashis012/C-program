#include <stdio.h>
int main()
{
    float marks;
    printf("Enter your marks: ");
    scanf("%f",&marks);
    if(marks>=0 && marks<=100)
    {
        if(marks>=90)
        {
            printf("A grade");
        }
        else if(marks>=70 && marks<90)
        {
            printf("B grade");
        }
        else if(marks>=60 && marks<75)
        {
            printf("C grade");
        }
        else if (marks>=40 && marks<60)
        {
            printf("D grade");
        }
        else{
            printf("Fail");
        }
    }
    else printf("Wrong Input");
    return 0;
}