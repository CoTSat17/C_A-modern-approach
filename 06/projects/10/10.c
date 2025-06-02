/*
Programming Project 9 in Chapter 5 asked you to write a program that determines which of
two dates comes earlier on the calendar. Generalize the program so that the user may enter
any number of dates. The user will enter 0/0/0 to indicate that no more dates will be entered:

    Enter a date (mm/dd/yy): 3/6/08
    Enter a date (mm/dd/yy): 5/17/07
    Enter a date (mm/dd/yy): 6/3/07
    Enter a date (mm/dd/yy): 0/0/0
    5/17/07 is the earliest date

*/

#include <stdio.h>
int compare_dates(int day_1, int day_2, int month_1, int month_2, int year_1, int year_2);

int main(void)
{   
    int earlier_day, earlier_month, earlier_year;
    int day, month, year;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &earlier_day, &earlier_day, &earlier_day);

    while (1)
    {
        // Get new date
        printf("Enter first date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);
        
        // Check if loop exit
        if (month == 0 && day == 0 && year == 0)
        {
            break;
        }
        

        // Compare dates and save if earlier
        if (compare_dates(earlier_day, earlier_month, earlier_year, day, month, year) == 1)
        {
            earlier_day = day;
            earlier_month = month;
            earlier_year = year;
        }
    }
    

    printf("%d/%d/%.2d is the earliest date\n", earlier_month, earlier_day, earlier_year);
}



int compare_dates(int day_1, int month_1, int year_1, int day_2, int month_2, int year_2)
{
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

    return latest;
}