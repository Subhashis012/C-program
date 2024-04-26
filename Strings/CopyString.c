#include<stdio.h>
#include<string.h>
int main(){
    char s1[] = "Subhashis Dhara";
    // char *s2 = s1; // s2 is a shallow copy
    // s1[0] = 'N';
    // printf("%s",s2);
    // Deep Copy
    char s2[] = "Subhashis Dhara";
    // s2[0] = 'M';
    // printf("%s\n",s1);
    // printf("%s",s2);
    printf("%p\n",s1);
    printf("%p",s2);
    return 0;
}