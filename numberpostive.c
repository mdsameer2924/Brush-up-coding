// Write a Program to check whether a number is positive, negative or zero
#include<stdio.h>
int main(){
  int num;
  printf("Enter the Number: ");
  scanf("%d",&num);
  // Error Handling 

    if (scanf("%d",&num)!=1){
      printf("Invalid Input");
      return 1;
    }
  
  if (num<0){
    printf("%d is an negative",num);
  } else if (num>0){
    printf("%d is Positive",num);
  }

  else{
     printf("%d is an Zero",num);
  }
  
  
  return 0;
}