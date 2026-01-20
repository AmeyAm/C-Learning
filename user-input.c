#include <stdio.h>
#include <string.h>
#include <strings.h>
int main() {

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";
    
    printf("enter your age: ");    
    scanf("%d", &age);
    
    printf("%d\n", age);

    getchar();
    printf("enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    printf("%s\n", name);
    return 0;
}