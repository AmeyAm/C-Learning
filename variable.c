#include <stdio.h>
#include <stdbool.h>

//stdbool.h is for boolean


int main(){
    //variable = a reusable container for a value
    // behave as if it were the value it contains

//int=integer, %d= call an integer func

    int age = 25;
    int year = 2025;
    int quantity = 2;

    printf("you are %d years old\n", age);
    printf("the year is %d\n", year);
    printf("you have ordered %d x items\n", quantity);


//float=decimals, %f = calling the float func

    float gpa = 2.5;
    float price = 19.99;
    float tempterature = -10.1;


    printf("your gpa is %f\n", gpa);
    printf("the price is $%f\n", price);
    printf("the temperature is %fF\n", tempterature);


//double= longer decimals, %lf = longer decimal func call


    double pi = 3.141592638979;

    printf("the value of pi is %.15lf", pi);

//char= character, %c for calling the character function

    char grade = 'F';
    char symbol = '$';
    
    printf("your grade is %c\n", grade);
    printf("your favorite symbol is %c\n", symbol);
    

//char [] = string i.e. just character with more words, %s to call the string function


    char name[] = "john dark souls";

    printf("hello %s\n", name);


//bool is for true and false, true = 1 false = 0; %d calls boolean which gives us 1 or 0

    bool isOnline = true;

    printf("%d\n", isOnline);

    //if..else example with boolean

    if(isOnline){
        printf("you are online\n");
    }
    else{
        printf("you are offline\n");
    }

    return 0;

    
}
