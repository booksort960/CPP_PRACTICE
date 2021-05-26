#include "Date.h"
inline int MonthDays(int year, int month)
{
	static int DayArrary[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int day = DayArrary[month - 1];
	if (month == 2 && (((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0))
	{
		day = 29;
	}
	return day;
}
Date::Date(int year, int month, int day)
{
	if (year > 0 && month <= 12 && month > 0 && day <= MonthDays(year, month) && day > 0)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	else
	{
		std::cout << "date illegal" << std::endl;
		assert(false);
	}
}
void Date::print(void)
{
	if (_year >= 1)
		std::cout << "公元 ";
	else
		std::cout << "公元前 ";
	std::cout << _year << "年" << _month << "月" << _day<<"日"<<std::endl;
}
Date::Date(const Date& d)//拷贝构造
{
	_year =d._year;
	_month = d._month;
	_day = d._day;
}
Date& Date::operator+=(int day)//+=运算赋重载
{
	_day += day;
	while (_day > MonthDays(_year, _month))
	{
		_day -= MonthDays(_year, _month);
		_month++;
		if (_month > 12)
		{
			_year++;
			if (_year == 0)
				_year = 1;
			_month = 1;
		}
	}
	return *this;
}
Date Date::operator+(int day)//+运算符重载
{
	//建立一个临时对象
	Date tmp(_year,_month,_day);//
	tmp += day;//->operator+=(&tmp,day);//对这个临时对象的操作
	return tmp;
}
Date& Date::operator-=(int day)//-运算符重载
{
	_day -= day;
	while (_day<=0)//终止条件->>_day > 0 && _day <= MonthDays(_year, _month)
	{
		_month--;
		if (_month < 1)
		{
			_year--;
			if (_year == 0)
				_year = -1;
			_month = 12;
		}
		_day += MonthDays(_year, _month);
	}
	return *this;
}
Date Date::operator-(int day)//-运算符重载
{
	Date tmp = (*this);
	tmp -= day;
	return tmp;
}



//日期之间的天数


int YearDays(int year)
{
	if (((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0)
		return 366;
	return 365;
}
int Date::operator-(Date& d)//日期减日期
{
	int Days = 0;
	Date bigDate;
	Date smallDate;
	if (_year > d._year)
	{
		bigDate = *this;
		smallDate = d;
	}
	else if (_year < d._year)
	{
		bigDate = d;
		smallDate = *this;
	}
	
	else//同一年
	{
		//小月的剩余天数加上中间月份的天数，再加上大月的天数
		if (_month > d._month)
		{
			bigDate = *this;
			smallDate = d;
		}
		else if (_month < d._month)
		{
			bigDate = d;
			smallDate = *this;
		}
		else//同一个月
		{
			int tmp = abs(_day - d._day);
			return tmp;
		}
	}
	int yearTmp = bigDate._year - smallDate._year - 1;
	int monthTmp = bigDate._month - smallDate._month - 1;
	
	for (int i = 1; i <= yearTmp; ++i)
	{
		Days += YearDays(smallDate._year + i);
	}

	Days += MonthDays(smallDate._year, smallDate._month) - smallDate._day;
	for (int i = smallDate._month + 1; i <= 12; i++)
		Days += MonthDays(smallDate._year, i);
	for(int i=1;i<bigDate._month;i++)
		Days+= MonthDays(smallDate._year, i);
	Days += bigDate._day;
	return Days;
}
