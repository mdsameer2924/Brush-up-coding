// Find second largest elements 
/* 
- Track to variables: max and secondmax
- Update both as you traverse 

*/

#include <stdio.h>
int main()
{
    int arr[]={43,32,52,71,1,3};
    int s=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    int smax=arr[0];

    //  Find max
    for (int i=0; i<s; i++){
        if(arr[i]>max){
            smax=max; // old max 
            max=arr[i]; // updated max
        }
    }
    printf("max: %d\nsecond Max: %d\n",max,smax);
    
    // To find the difference of that numbers 
    int diff=max-smax;
    printf("%d\n",diff);


    return 0;
}