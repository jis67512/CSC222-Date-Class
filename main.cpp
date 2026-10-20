#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
    Date christmas(12, 25, 2026);

    cout << christmas.toNumericString() << endl;
    cout << christmas.toMonthFirstString() << endl;
    cout << christmas.toDayFirstString() << endl;

    Date invalidDate(2, 29, 2025);
    cout << "Invalid date test: " << invalidDate.toNumericString() << endl;

    Date leapDate(2, 29, 2024);

    cout << "Leap year test: " << leapDate.toNumericString() << endl;

    cout << "Is leap year: " << leapDate.isLeapYear() << endl;

    cout << "Days in February: " << leapDate.lastDay() << endl;

    Date appointment(5, 10, 2026);

    cout << "Original date: " << appointment.toNumericString() << endl;

    appointment.setDate(6, 15, 2026);

    cout << "Modified date: " << appointment.toNumericString() << endl;

    appointment.setDate(4, 31, 2026);

    cout << "Invalid modification: " << appointment.toNumericString() << endl;

    Date century(2, 28, 1900);

    cout << "1900 leap year: " << century.isLeapYear(1900) << endl;

    cout << "2000 leap year: " << century.isLeapYear(2000) << endl;

    cout << "February 1900 days: " << century.lastDay(2, 1900) << endl;

    cout << "February 2000 days: " << century.lastDay(2, 2000) << endl;

    Date defaultDate;
    Date invalidMonth(13, 10, 2026);
    Date invalidYear(5, 10, 0);

    cout << "Default constructor: " << defaultDate.toNumericString() << endl;

    cout << "Invalid month: " << invalidMonth.toNumericString() << endl;

    cout << "Invalid year: "<< invalidYear.toNumericString() << endl;
    
    return 0;
}