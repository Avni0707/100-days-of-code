//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.//

#include <stdio.h>;
int main()
{
    int x,y;
    printf("input 2 numbers");
    scanf("%d %d",&x,&y);
    int sum=x+y;
    int diference=x-y;
    int product=x*y;
    int qoutient=x/y;
    printf("sum=%d difference=%d product=%d qoutient=%d",sum,difference,product,qoutient);

}