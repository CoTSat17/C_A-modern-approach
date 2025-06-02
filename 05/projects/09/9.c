/*
Write a program that prompts the user to enter two dates and then indicates which date comes earlier on the calendar:
    Enter first date (mm/dd/yy): 3/6/08
    Enter second date (mm/dd/yy): 5/17/07

5/17/07 is earlier than 3/6/08
*/

#include <stdio.h>

int main(void)
{
    // First date
    printf("Enter first date (mm/dd/yy): ");
    int day_1, month_1, year_1;
    scanf("%d/%d/%d", &month_1, &day_1, &year_1);
    

    // Second date
    printf("Enter second date (mm/dd/yy): ");
    int day_2, month_2, year_2;
    scanf("%d/%d/%d", &month_2, &day_2, &year_2);

    int latest; // 1 if first date; 2 if second date; 0 if equal
    // Compare
    if (year_1 > year_2)
    {
        latest = 1;
    }
    else if (year_1 < year_2)
    {
        latest = 0;
    }
    else
    {
        if (month_1 > month_2)
        {
            latest = 1;
        }
        else if (month_1 < month_2)
        {
            latest = 2;
        }
        else
        {
            if (day_1 > day_2)
            {
                latest = 1;
            }
            else if (day_1 < day_2)
            {
                latest = 2;
            }
            else
            {
                latest = 0;
            }
            
        }
        
    }


    // Output
    switch (latest)
    {
    case 0:
        printf("They are the same date\n"); break;
    
    case 1:
        printf("%d/%d/%.2d is later than %d/%d/%.2d\n", month_1, day_1, year_1, month_2, day_2, year_2); break;

    case 2:
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month_1, day_1, year_1, month_2, day_2, year_2); break;
    }

}