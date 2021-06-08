#include <stdio.h>

struct copies {
    int parent;
    int index;
};


struct copies * findIndexOfCopys(int * array, int length){
    
    struct copies copies[length];

    for(int i = 0; i < length; i++){

        printf("checking the %i number\n\n", i+1);

        for(int c = i; c < length-(i); c++){
            
            printf("length left %i\n", (length-(i)));
            printf("checking if %i is the same as %i\n\n", array[i], array[c]);
            
            if(array[i] == array[c]){
                printf("%i and %i are the same adding them to sruct\n\n", array[i], array[c]);
                copies[i].parent = array[i];
                copies[i].index = c;
                printf("succesfully added to struct here is the data: parent: %i, index: %i\n\n", copies[i].parent, copies[i].index);
            }
        }
    }
    return copies;
}


void deleteCopies() {}

int main(){

    printf("type length of array\n");

    int length = 0;

    scanf("%i", &length);

    int intgers[length];

    for(int i = 0; i < length; i++){
        printf("type array element %i here:\n", i+1);
        scanf("%i", &intgers[i]);
    }

    printf("printing comlpete list\n");

    for(int i = 0; i < length; i++){
        printf("%i ", intgers[i]);
    }

    printf("\nprinting copies\n");
    
    struct copies * indexes = findIndexOfCopys(intgers, length);

    printf("\n");
    for(int i = 0; i < length; i++){
        printf("%i ", indexes[i]);
    }

    return 0;
}