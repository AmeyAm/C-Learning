#include <stdio.h>
#include <stdbool.h>

/*
int main(){

    int number = 0;

    do{
        printf("enter a number greater than 0: ");
        scanf("%d", &number);
    }while(number <= 0);

    return 0;
}
*/

int main(){

    bool isRunning = true;
    char response = '\0';

    while(isRunning){
        printf("you are playing a game\n");
        printf("would you like to continue? : ");
        scanf(" %c", &response);

        if (response != 'Y' && response != 'y') {
            isRunning = false;
        }
    }

    printf("you exit the game");
}