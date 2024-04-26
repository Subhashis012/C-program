#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7] = {7,4,5,9,8,2,1};
    int n = 7;
    printf("Unsorted Array: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    // Selection sort
    for(int i=0;i<n-1;i++){ // n-1 passes
        //for(int j=i;j<=n-1;j++){ //ei line and nicher line 2toi hobe
        int min = INT_MAX;
        int minidx = -1;
            for(int j=i;j<n;j++){
                if(min>arr[j]){
                 min = arr[j];
                 minidx = j;
                }
            }
            // Swap the min and first element of unsorted part
            // swap minidx and i
            int temp = arr[minidx];
            arr[minidx] = arr[i];
            arr[i] = temp;

        }
    printf("\n");
    printf("Sorted Array: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}