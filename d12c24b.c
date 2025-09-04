//Q24: Write a program to calculate an electricity bill based on units consumed.//

#include <stdio.h>
int main()
{
    int unit,bill = 0;
    printf("Enter units");
    scanf("%d", &unit);

    if (unit <= 100) 
    {
        bill = unit * 5;
    }
    else if (unit <= 200) 
    {
        bill = (100 * 5) + (unit - 100) * 9;
    }
    else 
    {
        bill = (100 * 5) + (100 * 9) + (unit - 200) * 16;
    }
    printf("Bill: %d", bill);
    return 0;
}