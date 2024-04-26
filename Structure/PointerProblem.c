#include<stdio.h>
typedef int* pointer;
int main(){
    int x = 5;
    int y = 7;
    pointer a = &x,b = &y;
    // int* x,y; // int* x and int y computer eibhabe pore ei statement ta
    printf("%p\n",a);
    printf("%p\n",b);
    return 0;
}