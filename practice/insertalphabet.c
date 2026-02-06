// let's support a string is ameer let's add here 's'
// without using string function 

#include<stdio.h>
void string_ops(char name[],int pos, char alpha,int n);


int main()
{
    // Declare a string
    char name[7]="ameer";

    // insert alphabet at  specific postion
    string_ops(name,5,'s',7);
    return 0;
}

// defining the function to perform that string modification opeartions
void string_ops(char name[], int pos, char alpha, int n){
    for (int i=n-1; i>pos; i--){
        name[i]=name[i-1];
    }
// add alphabet that shifted value
name[pos]=alpha;

// display an output
printf("%s",name);

}