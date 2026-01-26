// Print an  array in reverse 

#include <stdio.h>
int main()
{

    int arr[]={3,5,6,7,4,45,12};
    int rev=arr[0];
    int count=sizeof(arr)/sizeof(arr[0]); // 20 size/4 = 5-1 = 4
    for (int i=count-1; i>=0; i--)
    {
       rev=arr[i];
       printf("%d\t",rev);
    }
    printf("\n");
    return 0;
}