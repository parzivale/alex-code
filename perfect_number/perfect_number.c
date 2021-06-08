#include <stdio.h>

void isPerfectNumber(int height,int length, int Matrix[height][length]){
    for(int i = 0; i < height; i++){
        for(int c = 0; c < length; c++){
            
            int total = 0;
            
            for(int b = 0; b < Matrix[i][c]; b++){
                if(Matrix[i][c]/b == 1){
                    total += Matrix[i][c];
                }
            }
            
            if(total == Matrix[i][c]){
                Matrix[i][c] = 1;
            } else {
                Matrix[i][c] = 0;
            }

        }
    }
}


int main(){

    int length = 0,height = 0;

    printf("Type length of matrix here:\n");
    scanf("%i", &length);
    printf("Type height of matrix here:\n");
    scanf("%i", &height);

    int inputMatrix[height][length];

    int counter = 0;

    for(int i = 0; i < height; i++){
        for(int c = 0; c < length; c++){
            counter++;
            printf("Type element %i here", counter);
            scanf("%i",&inputMatrix[i][c]);
        }
    }

    isPerfectNumber(length, height, inputMatrix);

    for(int i = 0; i < height; i++){
        for(int c = 0; c < length; c++){
            printf("%i", inputMatrix[i][c]);
        }
    }

    return 0;
}