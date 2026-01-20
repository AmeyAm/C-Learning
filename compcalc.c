#include <stdio.h>
#include <math.h>

int main() {

    double principal = 0.0;
    double rate = 0.0; 
    int years = 0;
    int timescompunded = 0;
    double total= 0.0;

    printf("Compund Interest Calculator\n");

    printf("Enter the principal (P):\n");
    scanf("%lf", &principal);

    printf("enter the interest rate % (r):\n");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("Enter the # of years (t):\n");
    scanf("%d", &years);
    
    printf("Enter the # of times compounded per year (n):\n");
    scanf("%d", &timescompunded);
   
    

    total = principal * pow(1 + rate / timescompunded, timescompunded * years);

    printf("After %d years, the total will be $%.2lf\n", years, total);

}