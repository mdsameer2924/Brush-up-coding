#include<stdio.h>
int main()
{
    int n, arr[100];
    printf("Enter the number to ensure the elemetns of array you want: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("Enter index [%d] value: ",i);
        scanf("%d",&arr[i]);
    }
    // Reverse
    for (int i=n-1; i>-1; i--){
        printf("%d\t",arr[i]);
    }

    return 0;
}