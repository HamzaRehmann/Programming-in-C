#include <stdio.h>

int main() {

    int weeks,days,hours;

    printf("Enter number of weeks: ");
    scanf("%d",&weeks);

    printf("Enter number of days: ");
    scanf("%d",&days);

    printf("Enter number of hours: ");
    scanf("%d",&hours);

    int x= 168*weeks;
    int y= 24*days;

    int t_hours = x+y+hours;

    printf("Total numbers of hours = %d\n",t_hours);

    return 0;

}