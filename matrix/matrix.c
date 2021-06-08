#include <stdio.h>
#include <math.h>

int main()
{

    int length = 0;

    printf("type in length of side here: \n");

    scanf("%i", &length);

    int matrix[length][length];

    int largestNumber = 0;

    int counter = 0;

    for (int i = 0; i < length; i++)
    {
        for(int c = 0; c < length; c++){
            printf("type item %i here:\n", counter);
            scanf("%i", &matrix[i][c]);
            counter++;
            if(matrix[i][c] > largestNumber){
                largestNumber = matrix[i][c];
            }
        }
    }

printf("\n");

 for (int i = 0; i < length; i++) {

        for(int c = 0; c < length; c++){
            
            printf("%i ", matrix[i][c]);

        }
        printf("\n");
    }



    int twoSqrt = sqrt(2);

    for(int i = 0; i < twoSqrt * length; i++){
        matrix[i][i] = largestNumber;
    }

    printf("\n");

    for (int i = 0; i < length; i++) {

        for(int c = 0; c < length; c++){
            
            printf("%i ", matrix[i][c]);

        }
        printf("\n");
    }

    return 0;
}