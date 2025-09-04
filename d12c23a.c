//Q23: Write a program to calculate a library fine based on late days.//

#include <stdio.h>
int main()
{
    int day, fine = 0;
    printf("enter number of late days:");
    scanf("%d", $day);
    if (day <= 0)
    {
        printf(" no fine");
    }
    else if (day <= 5)
    {
        fine = day *4;
        printf("fine %d", fine);
    }
    else if (day <= 10)
    {
        fine = day * 8;
        printf("fine %d", fine);
    }
    else if (day <= 30)
    {
        fine = day * 24;
        printf("fine %d",fine);
    }
    else
    {
        printf("membership cancelled");
    }
    return 0;
}