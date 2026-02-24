// Deletion array operations 
#include<stdio.h>
void rem(int arr[],int pos,int size);
int main(){
    // array declaration
    int arr[14]={21,35,52,21,45,67,22};
    
    // remove 5th elements from there 
    rem(arr,5,7);
    rem(arr,1,6);
    rem(arr,2,5);
    rem(arr,2,4);
    rem(arr,2,3);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[0]);
    
    return 0;
}
void rem(int arr[],int pos, int size){
    for(int i=pos-1; i<size-1; i++) arr[i]=arr[i+1];
    
    // display array
    for (int i=0; i<size-1; i++) printf("%d\t",arr[i]);
    printf("\n");
    
}