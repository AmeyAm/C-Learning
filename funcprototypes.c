#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age); //function prototype
bool agecheck(int age);

int main(){

    hello("spongebob", 30);

    if(agecheck(30)){
        printf("you are old enough to work here");
    }
    else {
    printf("you are not old enough to work here");
    }
    
    return 0;
}

void hello(char name[], int age){
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
}

bool agecheck(int age){
    return age >= 16;
}