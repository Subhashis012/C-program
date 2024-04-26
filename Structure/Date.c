#include<stdio.h>
#include<stdbool.h>
int main(){
    typedef struct date{
        int day;
        int month;
        int year;
    }date;
    date a,b;
    a.day = 1;
    a.month = 12;
    a.year = 2004;
    b.day = 10;
    b.month = 3;
    b.year = 2024;
    // bool flag = true;
    // if(a.day!=b.day) flag = false;
    // if(a.month!=b.month) flag = false;
    // if(a.year!=b.year) flag = false;
    // if(flag == true) printf("The dates are same");
    // else printf("The dates are different");
    date c;
    c=a;
    bool flag = true;
    if(a.day!=c.day) flag = false;
    if(a.month!=c.month) flag = false;
    if(a.year!=c.year) flag = false;
    if(flag == true) printf("The dates are same");
    else printf("The dates are different");
    return 0;
}