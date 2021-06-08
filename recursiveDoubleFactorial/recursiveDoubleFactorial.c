#include <stdio.h>

int doubleFactorial(int input){
    if(input <= 1){
        return 1;
    } else {
        return doubleFactorial(input-2) * input;
    }
}

int main(){

    int input;

    printf("Type number here: \n");
    scanf("%i", &input);

    int output = doubleFactorial(input);

    printf("The double factorial of %i is %i", input, output);

    return 0;
}