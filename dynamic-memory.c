/*
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int*arr,s;
    printf("Enter the size of an array: ");
    scanf("%d",&s);
    arr=(int*)calloc(s,sizeof(int));
    for (int i=0; i<s; i++){
        printf("Enter %d Element of Array: ",i);
        scanf("%d",&arr[i]);
    }
    printf("%d",arr[2]);
    return 0;
}