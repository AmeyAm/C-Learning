#include <stdio.h>

int main(){

    //2D array = an rray where each element is an array

    char numpad[][3] = {{'1', '2', '3'}, 
                        {'3', '4', '5'},
                        {'6', '7', '8'},
                        {'*', '0', '#'}};

    for(int i = 0; i < 4 ; i++){//rows
        for(int j = 0; j < 3; j++){ //columns
                printf("%c ", numpad[i][j]);
        }
        printf("\n");
    }
}
