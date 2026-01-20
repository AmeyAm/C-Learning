#include <stdio.h>


int main() {

    //arithmetic = +  * /  ++ --

    int x = 10;
    int y =2;
    int z = 0;

    z = x + y;

    printf("%d\n", z);

    z = x - y;

    printf("%d\n", z);

    z = x * y;

    printf("%d\n", z);

    z = x / y;

    printf("%d\n", z);

    z = x % y;

    printf("%d\n", z);

    z = x ++;

    printf("%d\n", z);

    z = x --;

    printf("%d\n", z);

    return 0;
}