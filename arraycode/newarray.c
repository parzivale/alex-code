#include <stdio.h>

int main(){

    printf("type length of array\n");

    int duplicate = 0,length = 0;

    scanf("%i", &length);

    int integers[length];

    for(int i = 0; i < length; i++){
        printf("type array element %i here:\n", i+1);
        scanf("%i", &integers[i]);
    }

    printf("printing comlpete list\n\n");

    for(int i = 0; i < length; i++){
        printf("%i ", integers[i]);
    }

    printf("\n");
    
    for (int i = 0; i < length; i++){
        
        for(int c = i+1; c < length; c++){
            
            if (integers[i] == integers[c]){
                duplicate++;           
                for(int f = c+1; f < length; f++){
                        integers[f-1] = integers[f];
                }

            }
        } 
    }

    printf("\nCreating shoter array with length %i\n\n", (length-duplicate+1));

    int newintegers[(length-duplicate+1)];

    printf("Created shoter array successfully\n\n");

    for(int i = 0; i < (length-duplicate+1); i++){
        newintegers[i] = integers[i];
    }

    printf("printing without copies\n");

    for(int i = 0; i < (length-duplicate+1); i++){
        printf("%i ", newintegers[i]);
    }

}