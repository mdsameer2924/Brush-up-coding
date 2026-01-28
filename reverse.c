#include<stdio.h>
int main()
{
    int arr[100];
    int count=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<count; i++){
        printf("Enter index [%d] value: ",i);
        scanf("%d",&arr[i]);
    }
    // Reverse
    for (int i=count-1; i>-1; i--){
        printf("%d\t",arr[i]);
    }

    return 0;
}