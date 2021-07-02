#include <stdio.h>

int recursiveAdd(int * array,int length, int positiveNumbers){
    if(length == 0){
        return positiveNumbers;
    }

    if(array[length-1] > 0){
        positiveNumbers =+ array[length];
    }

    return recursiveAdd(array, length-1, positiveNumbers);
}

int main(){

    int length, positiveNumbers = 0;

    printf("Type in a length: \n");
    scanf("%i", &length);

    int array[length];

    for(int i = 0; i < length; i++){
        printf("type in element %i here: ", i);
        scanf("%i", &array[i]);
    }


    positiveNumbers = recursiveAdd(array, length, positiveNumbers);
    printf("%i",positiveNumbers);

    return 0;
}