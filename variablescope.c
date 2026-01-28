#include <stdio.h>

int add(int x, int y){

    int result = x + y;
    return result;
}

int subtract(int x, int y){

    int result = x - y;
    return result;
}

int main(){

    int result = add(3, 4);

    printf("%d", result);

    return 0;
}

/* 
{} = scope
variable inside int main scope = local
variable outside int main scope = global
*/