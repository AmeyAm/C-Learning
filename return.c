#include <stdio.h>
#include <stdbool.h>

/*
double square(double num){
    return num * num;
}

int main() {

    double x = square(2);
    double y = square(3);
    double z = square(4);

    printf("%lf\n", x);
    printf("%lf\n", y);
    printf("%lf\n", z);

    return 0;
}
*/

bool agecheck(int age){

    if(age >= 18){
        return true;
    }
    else {
        return false;
    }
}

int main(){

    int age = 0;

    printf("enter your age:");
    scanf("%d", &age);

    if(agecheck(age)){

        printf("You may sign up\n");
    }
    else {
        printf("You must be 18+ to sign up\n");
    }
}

