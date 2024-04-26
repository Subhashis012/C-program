#include<stdio.h>
int main()
{
    // FILE* ptr = fopen("a.txt","r");
    // char str[100];
    // while(fgets(str,100,ptr)!=NULL)
    // printf("%s",str);
    FILE* ptr = fopen("B.txt","w");
    char str[] = "I am a good boy";
    fputs(str,ptr);
    fclose(ptr);
    return 0;
}