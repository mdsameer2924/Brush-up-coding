/* 
Find the difference between the sum of elemetns at even indices
to the sum of elemets at even indices to the sum of elements at 
odd indices
*/

#include<stdio.h>
int main()
{
    int arr[]={2,8,6,7,4,5};
    int s=sizeof(arr)/sizeof(arr[0]);
    int even=0,odd=0;
    for (int i=0; i<s; i++){
        if (i%2==0){
            even+=arr[i];
        } else{
            odd+=arr[i];
        }
        printf("%d\t",arr[i]);
    }
    // display odd and even sum.
    printf("\nsum of even index: %d\n",even);
    printf("sum of odd index: %d\n",odd);

    // Let's Find the difference between them
    int diff=even-odd;
    printf("The different is: %d\n",diff);


    return 0;
}