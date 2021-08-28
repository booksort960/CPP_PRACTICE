#pragma once
#include <iostream>
#include <iomanip>
using namespace std;
class Time
{
public:
    Time(int hour=8,int minu=0,int sec =0);
    Time(const Time& t);
    Time& operator=(Time t)
    {
        _hour=t._hour;
        _minu=t._minu;
        _sec=t._sec;
        return *this;
    }

    int Hour(void)
    {
        return _hour;
    }
    int Minute(void)
    {
        return _minu;
    }
    int Second(void)
    {
        return _sec;
    }

    ~Time()
    {}


private:
    int _hour;
    int _minu;
    int _sec;
};


class Calender
{
    

public:
    Calender(int year=1970,int month=1,int day=1,Time t =Time());
    Calender(const Calender& cal);
    
private:
    int _month;
    int _day;
    int _year;
    Time _t;
};




void PrintDate(int year,int month);
void PrintMonth(int month); 



