/*
Write a structure capable of storing date. Write a function to compare those dates.
*/

#include <stdio.h>

// 1. Define the Date structure using typedef
typedef struct {
    int day;
    int month;
    int year;
} Date;

// 2. Function to compare two dates
// Standard practice in C is to return:
//  1 if date1 is LATER than date2
// -1 if date1 is EARLIER than date2
//  0 if both dates are EXACTLY EQUAL
int compareDates(Date date1, Date date2) {
    // Step A: Compare the years first
    if (date1.year > date2.year) return 1;
    if (date1.year < date2.year) return -1;

    // Step B: If years are equal, compare the months
    if (date1.month > date2.month) return 1;
    if (date1.month < date2.month) return -1;

    // Step C: If months are also equal, compare the days
    if (date1.day > date2.day) return 1;
    if (date1.day < date2.day) return -1;

    // Step D: If year, month, and day are all equal
    return 0; 
}

// Helper function to print the date in DD/MM/YYYY format
void printDate(Date d) {
    // %02d pads single digits with a leading zero (e.g., 5 becomes 05)
    // %04d ensures the year is always 4 digits
    printf("%02d/%02d/%04d", d.day, d.month, d.year);
}

int main() {
    // Let's use today's actual date (Nov 5, 2026) for one of them!
    Date today = {5, 11, 2026}; 
    Date myBirthday = {15, 8, 2005}; 

    printf("Date 1 (Today): ");
    printDate(today);
    
    printf("\nDate 2 (Birthday): ");
    printDate(myBirthday);
    printf("\n\n");

    // Call the comparison function
    int result = compareDates(today, myBirthday);

    // Interpret the result
    if (result == 1) {
        printf("Date 1 is LATER than Date 2.\n");
    } else if (result == -1) {
        printf("Date 1 is EARLIER than Date 2.\n");
    } else {
        printf("Both dates are EXACTLY THE SAME.\n");
    }

    return 0;
}