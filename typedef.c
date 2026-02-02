#include <stdio.h>


typedef char String[50];
typedef char initials[3];
int main(){

    initials user1 = "ab";
    initials user2 = "cd";
    initials user3 = "ef";
    initials user4 = "gh";

    printf("%s\n", user1);
    printf("%s\n", user2);
    printf("%s\n", user3);
    printf("%s\n", user4);

    return 0;
}