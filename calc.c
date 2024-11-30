#include <stdio.h> 

char oper;
double a, b, c; 


int main(void)
{
    printf("Please enter math Operator.\n Addition with +\n Subtraction with -\n Multipling with *\n Dividing with /\n");
    scanf("%c", &oper);

// initiate error if another character chosen

    printf("first number: ");
    scanf("%lf", &a);
    printf("second number: ");
    scanf("%lf", &b);
    
    if (oper == '+');
    {
        c = a + b;
        printf("%lf", c);
    } else if (oper == '-')
    {
        c = a - b;
        printf("%lf", c);
    } else if (oper == '*')
    {
        c = a * b;
        printf("%lf", c);
    } else if (oper == '/')
    {
        c = a / b;
        printf("%lf", c);
    } else
    {
        printf("invalid\n");
        return 1;
    }
}