#include <iostream>
#include<iostream>
#include<ctime>
#include<cmath>
using namespace std;


// Calculate number of days function
struct Date {
    int d, m, y;
};

const int monthDays[12]
    = { 31, 28, 31, 30, 31, 30,
       31, 31, 30, 31, 30, 31 };

int countLeapYears(Date d)
{
    int years = d.y;

    if (d.m <= 2)
        years--;

    return years / 4
           - years / 100
           + years / 400;
}

int getDifference(Date dt1, Date dt2)
{

    long int n1 = dt1.y * 365 + dt1.d;

    for (int i = 0; i < dt1.m - 1; i++)
        n1 += monthDays[i];

    n1 += countLeapYears(dt1);

    long int n2 = dt2.y * 365 + dt2.d;
    for (int i = 0; i < dt2.m - 1; i++)
        n2 += monthDays[i];
        n2 += countLeapYears(dt2);


    return (n2 - n1);
}

int days(int sdate, int smonth, int syear, int edate, int emonth, int eyear)
{
    Date dt1 = { sdate, smonth, syear};
    Date dt2 = { edate, emonth, eyear};
    return getDifference(dt1, dt2);
}

// Below get system date function

int date()
{
    time_t t = time(NULL);
    tm* tPtr = localtime(&t);
    return (tPtr->tm_mday);
}

int month(){
    time_t t = time(NULL);
    tm* tPtr = localtime(&t);
    return (tPtr->tm_mon)+1;
}

int year(){
    time_t t = time(NULL);
    tm* tPtr = localtime(&t);
    return (tPtr->tm_year)+1900;
}
