#include <stdio.h>

int main(){

    int length = 0;
    int height = 0;

    printf("Type length of array:\n");
    scanf("%i", &length);
    printf("Type height of array:\n");
    scanf("%i", &height);

    int oddmatrix[height][length];

    int evenTotal = 0;
    int oddTotal = 0;
    int counter = 1;

    for(int i = 0; i < height; i++){
        for(int c = 0; c < length; c++){
            printf("Type element %i here:\n", counter);
            scanf("%i", &oddmatrix[i][c]);
            counter++;
        }
    }

    for(int i = 0; i < height; i++){
        for(int c = 0; c < length; c++){
            printf("%i ",oddmatrix[i][c]);
        }
        printf("\n");
    }

    for(int i = 0; i < height; i++){
        for(int c = 0; c < length; c++){
            if((c+1)%2 == 0){
                evenTotal += oddmatrix[i][c];
            }
            else{
                oddTotal += oddmatrix[i][c];
            }
        }
    }

    printf("The difference is ");
    printf("%i",oddTotal-evenTotal);

    return 0;
}