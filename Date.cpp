#include "Date.h"

Date::Date(int m, int d, int y)
{
    setDate(m, d, y);
}

bool Date::isLeapYear(int year) const
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int Date::lastDay(int month, int year) const
{
    switch (month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        return isLeapYear(year) ? 29 : 28;
    default:
        return -1; // Invalid month
    }
}

int Date::lastDay() const
{
    return lastDay(month, year);
}


bool Date::isLeapYear() const
{
    return isLeapYear(year);
}

void Date::setDate(int m, int d, int y)
{
    if (m < 1 || m > 12 || y < 1 || d < 1 || d > lastDay(m, y))
    {
        month = 1;
        day = 1;
        year = 1900;
    }
    else
    {
        month = m;
        day = d;
        year = y;
    }
}

int Date::getMonth() const
{
    return month;
}

int Date::getDay() const
{
    return day;
}

int Date::getYear() const
{
    return year;
}

std::string Date::toNumericString() const
{
    return std::to_string(month) + "/" + std::to_string(day) + "/" + std::to_string(year);
}

std::string Date::toMonthFirstString() const
{
    static const std::string monthNames[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    return monthNames[month - 1] + " " + std::to_string(day) + ", " + std::to_string(year);
}

std::string Date::toDayFirstString() const
{
    static const std::string monthNames[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    return std::to_string(day) + " " + monthNames[month - 1] + " " + std::to_string(year);
}