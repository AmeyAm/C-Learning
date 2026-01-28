#include <stdio.h>
//#include <window.h>
#include <unistd.h>

int main(){

    for(int i = 0; i < 10; i++){
        sleep(10);
        printf("%d\n", i);

    }
}