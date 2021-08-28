#include "percal.h"

Time::Time(int hour,int minu,int sec)
        :_hour(hour)
        ,_minu(minu)
        ,_sec(sec)
{}
Time::Time(const Time& t)
        :_hour(t._hour)
        ,_minu(t._minu)
        ,_sec(t._sec)
{}

Calender:: Calender(int year,int month,int day,Time t)
    :_month(month)
    , _day(day)
    ,_year(year)
    ,_t(t)
{}

Calender::Calender(const Calender& cal)
    :_month(cal._month)
    ,_day(cal._day)
    ,_year(cal._year)
    ,_t(cal._t)
{}

static inline int MonthDays(int year,int month)
{
    static int DayArr[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int day=DayArr[month];
    if(month==2&&((year%4==0&&year%100!=0)||year%400==0))
    {
        day=29;
    }
    return day;
}
void PrintMonth(int month)
{
    static const char* mon[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    cout<<"              "<<mon[month-1]<<endl;
}



static int YearDay(int year)
{

    if((year%4==0&&year%100!=0)||year%400==0)
        return 366;
    return 365;
}



static int DaySum(int year)
{
    int total=0;
    for(int i=1970;i<year;i++)
    {
        total+=YearDay(i);
    }
    return total;
}


void PrintDate(int year,int month)
{
    static int start=(DaySum(year)%7+4)%7;
    start=(start+MonthDays(year,month-1)%7)%7;
    int Monthday=MonthDays(year,month);
    int tmp=start;
    for(int i=1;i<=Monthday;i++)
    {
        while(tmp)
        {
            cout<<"      ";
            tmp--;
        }
        cout<<setw(3)<<i;
        if((start+i)%7==0)
            cout<<endl;
        else 
            cout<<"   ";

    }
}
