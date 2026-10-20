/*
    Date Abstract Data Type (ADT)

    Purpose:
    Represents a valid calendar date.

    Class Invariant:
    1. Month must be between 1 and 12.
    2. Year must be at least 1.
    3. Day must be between 1 and lastDay(month, year).
*/


#ifndef DATE_H
#define DATE_H
#include <string>
class Date
{
private:
    
    // Member variables
    int month;
    int day;
    int year;

public:
    // Constructor
    /*
        Purpose: Initializes a Date object.
        Input: Month, day, and year.
        Preconditions: None; invalid input is handled.
        Postconditions: Stores a valid date or resets to 1/1/1900.
        Output: An initialized Date object.
    */
    Date(int m = 1, int d = 1, int y = 1900);


    // Mutator
    /*
        Purpose: Modifies an existing Date object.
        Input: Month, day, and year.
        Preconditions: None; invalid input is handled.
        Postconditions: Stores the new date if valid;
                        otherwise resets to 1/1/1900.
        Output: None.
    */
    void setDate(int m, int d, int y);

    // Accessors
    /*
        Purpose: Retrieve the stored month, day, or year.
        Input: None.
        Preconditions: The Date object is valid.
        Postconditions: The stored date remains unchanged.
        Output: An integer representing the requested value.
    */
    int getMonth() const;
    int getDay() const;
    int getYear() const;

    //Leap-year
    /*
        Purpose: Determine whether a year is a leap year.
        Input: Stored year or supplied year.
        Preconditions: Supplied year must be at least 1.
        Postconditions: Stored date remains unchanged.
        Output: true for a leap year; otherwise false.
    */
    bool isLeapYear() const;
    bool isLeapYear(int year) const;

    //Last day of month
    int lastDay() const;
    int lastDay(int month, int year) const;

    // String representations
    std::string toNumericString() const;
    std::string toMonthFirstString() const;
    std::string toDayFirstString() const;

};

#endif