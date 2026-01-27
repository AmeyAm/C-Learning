#include <stdio.h>
#include <stdbool.h>


//|| is the OR logical operator

/*
int main(){

    int temp =  0;

    if(temp <= 0 || temp >= 30){
        printf("the temperature is BAD");
    }
    else{
        printf("the temperature is GOOD");
    }


}
*/

//&& is the AND logical operator

/*int main() {

    int temp =  0;

    if(temp > 0 && temp < 30){
        printf("the temperature is GOOD");
    }
    else{
        printf("the temperature is BAD");
    }
}
*/

// ! is the NOT logical operator

int main(){

    bool isSunny = true;

    if (!isSunny) {
        printf("It is CLOUDY outside");
    }
    else {
        printf("It is SUNNY outside");
    }
}