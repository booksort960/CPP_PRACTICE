#pragma once
#include <iostream>
#include <cassert>
class Date
{
public:
	//构造函数
	Date(int year = 1, int month = 1, int day = 1);
	Date(const Date& d);//拷贝构造
	Date& operator+=(int day);//+=运算赋重载
	Date operator+(int day);//+运算符重载
	Date& operator-=(int day);//-=运算符重载
	Date operator-(int day);//-运算符重载
	int operator-(Date& d);//日期减日期
	void print(void);
private:
	int _year;
	int _month;
	int _day;
};