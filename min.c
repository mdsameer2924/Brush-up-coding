// Find the  Minimum value in Array
#include <stdio.h>
int main()
{
// An Array
int arr[]={2,4,5,6,7,1,-34};
// Size of an  ARRay
int size=sizeof(arr)/sizeof(arr[0]);

// Assume a Index 0 min value 
int min=arr[0];

for (int i=0; i<size; i++){
	if(arr[i]<min){
	min=arr[i];
	}
}

// Display An Elements of an array
for (int i=0; i<size; i++){
	printf("%d\t",arr[i]);
}
printf("\n");
printf("The minimum value is %d",min);

return 0;
}
