#include<stdio.h>
int main()
{
    int a=5;
    int* x=&a; //int* -> int ka address store karta hai
    //printf("%p\n",&a);
    //printf("%p\n",x);
    //printf("%p",&x);
    //printf("%d\n",*x);  // %p se address print hota hai
    //VVIP -> *x=7; // ais changed
    //printf("%d\n",a);
    //printf("%d",*x);
    int** y=&x; // int** -> int* ka address store karta hai
    int*** z=&y;
    //printf("%p\n",&x);
    //printf("%p",y);
    printf("%d\n",*x);
    printf("%d\n",**y);
    printf("%d",***z);
    return 0;
}