// Write a code to find the minimum & second minimum value from array and find their difference
#include<stdio.h>
int main()
{
    int list[]={5,3,6,2,13,24};
    int s=sizeof(list)/sizeof(list[0]);
    int min=list[0], smin=list[0];

    // find the smalles value
    for (int i=0; i<s; i++){
        if(min>list[i]){
            smin=min;
            min=list[i];
        }
    }

    // show min and smin value from an array
    printf("minimum:%d\nsecond minimum:%d\n",min,smin);

    // To find the difference of two minimum value 
    int diff=min-smin;
    printf("difference between %d & %d is %d\n",min,smin,diff);

    return 0;
}