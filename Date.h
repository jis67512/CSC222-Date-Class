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
    // Constructors
    Date(int m = 1, int d = 1, int y = 1900);

    // Mutator
    void setDate(int m, int d, int y);

    // Accessors
    int getMonth() const;
    int getDay() const;
    int getYear() const;

    //Leap-year
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