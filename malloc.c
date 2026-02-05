#include <stdio.h>
#include <stdlib.h>

int main(){

    /*
    malloc = a function in C that dynamically allocates
    a specified number of bytes in memory
    */

    int number = 0;
    printf("enter the number of grades: ");
    scanf("%d", &number);

    char *grades = malloc(number * sizeof(char));


    if(grades == NULL){
        printf("memory allocation failed\n");
        return 1;
    }

    for(int i = 0; i < number; i++){
        printf("enter grade #%d : ", i + 1);
        scanf(" %c", &grades[i]);
    }

    for(int i = 0; i < number; i++){
        printf("%c ", grades[i]);
    }
    printf("\n");

    free(grades); //returning "rented" space back to the OS
    grades = NULL; //avoids dangling pointers

    return 0;
}