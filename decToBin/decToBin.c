#include <stdio.h>

int power(int base, int exponent){
    int output = 1;
    for(int i = 0; i < exponent; i++){
        output *= base;
    }
    return output;
}

int convertToBin(int input){

    int output = 0;
    int i = 0;

    while(input > 0){
        output += input%2 * power(10, i);
        input /= 2;
        i++;
    }

    return output;
}

int main(){
    int input = 0;

    printf("Type a number here: \n");
    scanf("%i", &input);

    int output = convertToBin(input);

    printf("The number %i in bin is: %i", input , output);

    return 0;
}