#include <math.h>
#include <stdio.h> 

#define Add (a, b) (a + b)
#define Subtract (a, b) (a - b)
#define Multiply (a, b) (a * b)
#define Divide (a, b) (a / b)
#define Root (a) (sqrt(a))

char oper;
double a, b, c; 


int main(void)
{
    printf("Please enter math Operator.\n Addition with +\n Subtraction with -\n Multipling with *\n Dividing with /\n Square Root with S\n ");
    scanf("%c", &oper);

// make conditions for each operation
    
    if (oper == '+')
    {
        printf("first number: ");
        scanf("%lf", &a);
        printf("second number: ");
        scanf("%lf", &b);
        c = a + b;
        printf("%.2lf\n", c);
    }

    else if (oper == '-')
    {
        printf("first number: ");
        scanf("%lf", &a);
        printf("second number: ");
        scanf("%lf", &b);
        c = a - b;
        printf("%.2lf\n", c);
    }

    else if (oper == '*')
    {
        printf("first number: ");
        scanf("%lf", &a);
        printf("second number: ");
        scanf("%lf", &b);
        c = a * b;
        printf("%.2lf\n", c);
    }
    
    else if (oper == '/')
    {
        printf("first number: ");
        scanf("%lf", &a);
        printf("second number: ");
        scanf("%lf", &b);
        if (a, b == 0)
        {
            printf("Error: Division by zero is not allowed.\n");
            return 1;
        }
        
        c = a / b;
        printf("%.2lf\n", c);
    }

//Adding square root

    else if (oper == 'S', 's')
    {
        printf("Enter number: ");
        scanf("%lf", &a);
        printf("The square root is: %.2lf\n", sqrt(a));
    }
    
// initiate error if another character chosen

    else if (oper != '/', '+', '-', '*', 's', 'S')
    {
        printf("invalid\n");
        return 1;
    }

}