#include <stdio.h>
#include <stdlib.h>

int age, year, seconds;
int main()
{
printf("Enter Your Age in Years: \n");
scanf("%d",&age);
age=(age*31557600);
printf("Your Age in Seconds is: %d \n", age);
    return 0;
}
