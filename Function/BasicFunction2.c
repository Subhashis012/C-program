#include<stdio.h>
int main(){
    void india();
    india(); //Calling india //1
    return 0; //10
}
void india(){
    printf("You are in India\n"); //2
    void australia();
    australia(); //Calling australia //3
    return; //9
}
void england(){
    printf("You are in England\n"); //6
    return; //7
}
void australia(){
    printf("You are in Australia\n"); //4
    void england();
    england(); //Calling england //5
    return; //8
}

