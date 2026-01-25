// find the maximum value in array 
#include<stdio.h>
int main()
{
    int arr[]={342,34,24,36,39};
    
    // Size of array and count of their elements;
    int s=sizeof(arr)/sizeof(arr[0]);

    // Let's assume [0]th value is max value
    int max=arr[0];

    // using loop to compare  
    for (int i=0; i<s; i++){
        if (arr[i]>max){ // if max is not max then max hold arr value until loop work
            max=arr[i];
        }
    }

    // Transverse Array
    for (int j=0; j<s; j++){
        printf("%d\t",arr[j]);
    }
    printf("\n");

    // Display maximum value
    printf("The maximum value is %d. ",max);


    return 0;
}