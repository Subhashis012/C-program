#include <stdio.h>
#include<stdbool.h>
int main()
{
    int arr[7] = {12, 21, 30, 42, 21, 6, 7};
    int x = 42;
    int idx = 0;
    //int check = 0;
    bool flag = false; // false means not present
    for (int i = 0; i <= 6; i++)
    {
        if(arr[i]==x)
        {
            //check = 1;
            flag = true; // true means present
            idx = i;
            break;
        }
    }
    //if(check==0) printf("%d is not present in the array ",x);
    if(flag==false) printf("%d is not present in the array ",x);
    else printf("%d is  present in the array and its index is %d ",x,idx);
    return 0;
}