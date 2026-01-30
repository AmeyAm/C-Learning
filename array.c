#include <stdio.h>

int main(){

    /*array= a fixed-size collection of elements of the same data type, 
    it is similar to variable but holds more than one valude*/


    int numbers[] = {10, 20, 30, 40};

    char grades[] = {'A', 'B', 'C', 'D',  'F'};
    char name[] = "Amey";

    printf("%zu\n", sizeof(numbers));
    printf("%zu\n", sizeof(numbers[0]));

/*
    for(int i = 0; i < 5; i++){
        printf("%c\n", grades[i]);
    }
*/





    return 0;
}