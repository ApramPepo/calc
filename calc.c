#include <stdio.h> 

char oper;
double a, b; 


int main(void)
{
    printf("Please enter math Operator.\n Addition with +\n Subtraction with -\n Multipling with *\n Dividing with /\n");
    scanf("%c", &oper);

    printf("first number: ");
    scanf("%lf", a);
    printf("second number: ");
    scanf("%lf", b);

    if(oper != "+", "-", "*", "/")
    {
        printf("Invalid\n");
        return 1;
    }
    else if (oper == "+");
    {
        printf(&a + &b);
    }
    
}