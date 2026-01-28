// Find the first repeating element in an array
#include<stdio.h>
int main()
{
    int arr[]={3,2,3,4,5};
    int c=sizeof(arr)/sizeof(arr[0]);
    int rep=arr[0];
    for (int i=0; i<c; i++){
        if(rep!=arr[i]){
             // debug what happend here
            rep=arr[i];
        }
    }
    printf("%d",rep);
    return 0;
}