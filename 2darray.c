#include<stdio.h>

int main(){

    int matrix[2][2];
    int row, column;
    
    //taking input
    for(row=0; row<2; row++){
        for(column=0; column<2; column++){
            scanf("%d", &matrix[row][column]);
        }
    } 
    
    //printing matrix
    for(row=0; row<2; row++){
        for(column=0; column<2; column++){
            printf("matrix[%d][%d] is %d\n", row, column, matrix[row][column]);
        }
    } 
    
}
