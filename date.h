#ifndef DATE_H
#define DATE_H

class date
{
public:
    date(int day, int month, int year);
    void get_date();
private:
    int day;
    int month;
    int year;
};

#endif // DATE_H
