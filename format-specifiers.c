#include <stdio.h>

int main() {

    
    /*format specifier= special tokens that begin with a  symbol, 
    followed by a character that specifies the data and optional modifiers
    controls how data is displayed or interpreted.
    */


    int age = 25;
    float price = 2.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "Solaire Astoria";


    printf("%d\n", age);
    printf("%.2f\n", price);
    printf("%lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);


    int num1 = 1;
    int num2 = 10;
    int num3= -100;

//3 empty spaces before the number unless the number is 3 spaces  
    printf("%3d\n", num1);
    printf("%3d\n", num2);
    printf("%3d\n", num3);

//same thing but after the number
    printf("%-3d\n", num1);
    printf("%-3d\n", num2);
    printf("%-3d\n", num3);

//add 0 before the number
    printf("%03d\n", num1);
    printf("%03d\n", num2);
    printf("%03d\n", num3);

//adds + before the the number, unless function is already negative
    printf("%+d\n", num1);
    printf("%+d\n", num2);
    printf("%+d\n", num3);


  
    return 0;


}