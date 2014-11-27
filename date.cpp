#include "date.h"

date::date()
{
}

date::date(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}

void date:: get_date()
{
    std::cout << d << "." << m << "." << y << std::endl;
}
