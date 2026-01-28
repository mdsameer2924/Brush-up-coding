// Write a program in C to copy the elements of one array into another 
// array.
#include<stdio.h>
int main()
{
    int a1[100],n;
    int a2[100];
    
    // Set the number of elements you want to enter in an array
    printf("Enter the number to ensure how many elements you want into an array: ");
    scanf("%d",&n);

    // to take elements of array input from user
    for (int i=0; i<n; i++){
        printf("Enter Index [%d] value: ",i);
        scanf("%d",&a1[i]);
        
        // Copy array 1 int0 array 2
            a2[i]=a1[i];
    }
    printf("\nOriginal Elements:\n");
    for(int i=0; i<n; i++){
        printf("% 5d\t",a1[i]);
    }

    printf("\nSecond ARray Copied:\n");
    for (int i=0; i<n; i++){
        printf("% 5d\t",a2[i]);
    }





    return 0;
}