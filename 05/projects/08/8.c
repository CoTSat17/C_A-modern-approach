/*
The following table shows the daily flights from one city to another:
Departure time      Arrival time
8:00 a.m.           10:16 a.m.
9:43 a.m.           11:52 a.m.
11:19 a.m.          1:31 p.m.
12:47 p.m.          3:00 p.m.
2:00 p.m.           4:08 p.m.
3:45 p.m.           5:55 p.m.
7:00 p.m.           9:20 p.m.
9:45 p.m.           11:58 p.m.

Write a program that asks user to enter a time (expressed in hours and minutes, using the 24-
hour clock). The program then displays the departure and arrival times for the flight whose
departure time is closest to that entered by the user:

    Enter a 24-hour time: 13:15
    Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
*/




#include <stdio.h>
int flight_search(int array[], int value);

#define n_flights 8

int main(void)
{
    // Flight Departures
    int flight_departures[n_flights] = {480, 583, 679, 767, 840, 945, 1140, 1305}; // For computation
    char *flight_departures_text[n_flights] = {"8:00 a.m", "9:43 a.m", "11:19 a.m", "12:47 p.m", "2:00 p.m", "3:45 p.m", "7:00 p.m", "9:45 p.m"};
    char *flight_arrivals_text[n_flights] = {"10:16 a.m", "11:52 a.m", "1:31 p.m", "3:00 p.m", "4:08 p.m", "5:55 p.m", "9:20 p.m", "11:58 p.m"};

    // Get time
    printf("Enter a 24-hour time: ");
    int hour, minutes;
    scanf("%d:%d", &hour, &minutes);

    int minutes_since_midnight = hour * 60 + minutes;




    // Find the array index of the value that is closer in the array.

    int closer_flight_index;
    // Handle if the input is earlier or later than the earliest or latest flight departure correspondendly
    if (minutes_since_midnight <= flight_departures[0])
    {
        closer_flight_index = 0;
    }
    else if (minutes_since_midnight >= flight_departures[n_flights - 1])
    {
        closer_flight_index = n_flights - 1;
    }
    // Now that it has to be in between values of the array use binay search to find it.
    else
    {
        closer_flight_index = flight_search(flight_departures, minutes_since_midnight);
    }



    // Print the result
    printf("Closest departure time is %s., arriving at %s.",
    flight_departures_text[closer_flight_index], flight_arrivals_text[closer_flight_index]);


}



int flight_search(int array[], int value)
/*
Find the departures where the input value is in between, using binay search.
When found determine which of the 2 values is closer and return it's index in the array
*/
{
    // implement binary search
    int max_index = n_flights - 1;
    int min_index = 0;
    int search_index;



    while (1)
    {
        search_index = (max_index + min_index) / 2;

        // If the value is between an earlier and later flight return the current search index
        if (array[search_index] <= value && array[search_index + 1] >= value)
        {
            // determine which is closer
            if (value - array[search_index] < array[search_index + 1] - value )
            {
                return search_index;
            }
            else
            {
                return search_index + 1;
            }
        }

        // If the search index has a value to big, the correct result must be earlier
        if (array[search_index] > value)
        {
            max_index = search_index - 1;
        }
        // If the search index + 1 has a value to small, the correct result must be later
        else if (array[search_index + 1] < value)
        {
            min_index = search_index + 1;
        }
    }
}