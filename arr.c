// Find second largest elements 
/* 
- Track to variables: max and secondmax
- Update both as you traverse 

*/
<<<<<<< HEAD
#include<stdio.h>
int main()
{
    int arr[]={3,4,0,4,2,15,10};
    int s=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    int min=arr[0];
    int smax=arr[0];
    for (int i=0; i<s; i++){
        // Display an array
        // printf("%d\t",arr[i]);
        
        // max value of an array
        if (arr[i]>max){
            max=arr[i];
       
        }
  // Second max value of an array
        if (smax>arr[i]&& smax!=max){
            smax=max;
        }
       
        
        // min value of an array
        if (arr[i]<min){
            min=arr[i];
        }
    }
     printf("\n%d is an minimum value of an array\n",min);
     printf("\n%d is an maximum value of an array\n",max);
    printf("\n%d is an second maximum value of an array\n",smax);

=======

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
>>>>>>> Array


    return 0;
}