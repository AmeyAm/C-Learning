#include <stdio.h>
#include <stdbool.h>

int main(){

    float price = 10.00;
    bool isStudent = true;
    bool isSenior = true;

    //student = $9
    //senior = $8
    //both = $7

    if (isStudent) {
         if (isSenior) {
            printf("You get a senior discount of 20%");
            printf("You get a student discount of 10%");
            price *= 0.7;
        }
            else {
            printf("You get a student discount of 10%");
            price *= 0.9;
        }
    
    }
    else {
        if (isSenior) {
            printf("you get  a senior discount of 20%");
            price *= 0.8;
        }
    }
   

    printf("the price of your ticket is: $%.2f\n", price);

    return 0;
}