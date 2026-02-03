#include <stdio.h>

enum Day{
    SUNDAY = 1, MONDAY = 2, TUESDAY = 3, WEDNESDAY = 4, THURSDAY = 5, FRIDAY = 6, SATURDAY = 7
};

int main(){

    enum Day today = SUNDAY;

    if(today == SUNDAY || today == SATURDAY){
    printf("it's the weekend");
    }
    else{
        printf("it's a weekday");
    }
    return 0;
}