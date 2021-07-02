#include <stdio.h>

int * recursiveFlip(int * array,int * newarray,int length, int iterator){
    if(length < 1){
        return newarray;
    }
    newarray[iterator] = recursiveFlip(array, newarray ,length-1, iterator);
}

int main(){
    int length;

    printf("type length: \n");
    scanf("%i", &length);

    int array[length];
    int newarray[length]; 
    int iterator = 0;

    for(int i = 0; i < length; i++){
        array[i] = i;
    }

 
    int *flip = recursiveFlip(array, newarray,length, iterator);

    for(int i = 0; i < length; i++){
        printf("%i ", flip[i]);
    }

    return 0;
}