// create a program to insert a value at specific posittion in an array
#include<stdio.h>

// Declare a fucntion a to insert a value in an array
void insert(int arr[],int pos, int val,int n);
int main()
{
    // declare an array
    int arr[5]={3,5,9,8};

    // insert value in an array via calling functions
    insert(arr,3,2,5);

    return 0;
}

// Defining a function 
void insert(int arr[],int pos, int val, int n){
    
    // shifting a value to left and make space of an array right to left shift towards position of an index 
    for (int i=n-1; i > pos-1; i--){
        arr[i]=arr[i-1];
    }

    // insert val at that position right now
    // arr[pos]=val;

    // print the modified array
    for (int i=0; i<n; i++)
    { 
        printf("%d\t",arr[i]);

    }
}