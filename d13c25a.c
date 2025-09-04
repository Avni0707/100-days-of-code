//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.//

#include <stdio.h>
int main() 
{
    int x, y;
    char operator;
    printf("Enter two numbers and an operator: ");
    scanf("%d %d %c", &x, &y, &operator);
    switch(operator) 
    {
        case '+':
            printf("%d", x + y);
        case '-':
            printf("%d", x - y);
        case '*':
            printf("%d", x * y);
        case '/':
            if (y != 0)
                {printf("%d", x / y);}
            else
                {printf("Division by zero");}
        case '%':
            if (y != 0)
                {printf("%d\n", x % y);}
            else
                {printf("Modulus by zero");}
        default:
            printf("Invalid operator");
    }
    return 0;
}