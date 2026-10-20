#ifndef DATE_H
#define DATE_H

class Date
{
private:
    int month;
    int day;
    int year;

public:
    Date(int m = 1, int d = 1, int y = 1900);
};

#endif