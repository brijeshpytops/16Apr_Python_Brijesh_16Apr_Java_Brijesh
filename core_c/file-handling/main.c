#include<stdio.h>

void main(){
    char filename[] = "sample.txt";

    int res = remove(filename);

    if (res == 0){
        printf("File deleted successfuly.");
    }else{
        printf("File unable to delete.");
    }
}
