// print the marks from an array less than 35 marks only
#include<stdio.h>
int main()
{
    int marks[]={66,45,35,24,65,75,23,34,14,10,25,47,98};
    int s=sizeof(marks)/sizeof(marks[0]);
    // to print less than 35 marks from list
    for (int i=0; i<s; i++){
        if(marks[i]<35){
            printf("%d\t",marks[i]);
        }
    }


    return 0;
}