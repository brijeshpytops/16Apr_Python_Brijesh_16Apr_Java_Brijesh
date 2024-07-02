// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int matrix1[2][3]= {
        {1,2,3},
        {4,5,6}
    };
    int matrix2[2][3]= {
        {11,22,33},
        {44,55,66}
    };
    
    printf("Matrix-1: \n");
    for(int row = 0; row<=1; row+=1){
        for(int col = 0; col <= 2; col+=1){
            printf("%d ", matrix1[row][col]);
        }
        printf("\n");
    }
    
    printf("Matrix-2: \n");
    for(int row = 0; row<=1; row+=1){
        for(int col = 0; col <= 2; col+=1){
            printf("%d ", matrix2[row][col]);
        }
        printf("\n");
    }
    
    printf("Matrix - 1 +  Matrix - 2 \n");
    for(int row = 0; row<=1; row+=1){
        for(int col = 0; col <= 2; col+=1){
            printf("%d ", matrix1[row][col] + matrix2[row][col]);
        }
        printf("\n");
    }
    
    printf("Matrix - 1 *  Matrix - 2 \n");
    for(int row = 0; row<=1; row+=1){
        for(int col = 0; col <= 2; col+=1){
            printf("%d ", matrix1[row][col] * matrix2[row][col]);
        }
        printf("\n");
    }
    

    return 0;
}