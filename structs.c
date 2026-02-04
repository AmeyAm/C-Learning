#include <stdio.h>
#include <stdbool.h>

struct Student{
    char name[50];
    int age;
    float gpa;
    bool isfulltime;
};


int main(){

    struct Student student1 = {"spongebob, 30, 2.5, true"};

    printf("%s\n", student1.name);
    printf("%d\n", student1.age);
    printf("%f\n", student1.gpa);
    printf("%d\n", student1.isfulltime);

    return 0;
}