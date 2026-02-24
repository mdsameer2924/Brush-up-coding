// traversiong an  3d array of an elements 
#include<stdio.h>
int main(){
    int arr[3][4][2]={
        {{3,1},   // 1st layer
        {3,2},    
        {3,3},
        {3,4}},
        
        {{4,1},     // 2nd layer
        {4,2}, 
        {4,3},
        {4,4}},

        {{5,1},     // 3rd layer
        {5,2},
        {5,3},
        {5,4}}

    };
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            for(int k=0; k<2; k++){
                printf("%d  ",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}