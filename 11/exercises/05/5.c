/*
Write the following function

void split_time(long total_sec, int *hr, int *min, int *sec);
total_sec is a time represented as the number of seconds since midnight. 
hr, min and sec are pointers to variables in which the function will store the equivalent time in hours (0-23), 
minutes (0-59) and seconds (0-59), respectively.
*/


#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);


int main(void) {
    long total_sec = 12312243;
    int hr = 0, min = 0, sec = 0;

    split_time(total_sec, &hr, &min, &sec);

    printf("The equivalent of %ld is: %d hours, %d min, %d sec\n", total_sec, hr, min, sec);
}



void split_time(long total_sec, int *hr, int *min, int *sec) {
    // Calc hours
    *hr = total_sec / 3600;
    total_sec %= 3600;
    // Calc mins
    *min = total_sec / 60;
    total_sec %= 60;
    // Calc Secs
    *sec = total_sec;
    
}


