#pragma once
#include <iostream>
#include <cassert>
class Date
{
public:
	//���캯��
	Date(int year = 1, int month = 1, int day = 1);
	Date(const Date& d);//��������
	Date& operator+=(int day);//+=���㸳����
	Date operator+(int day);//+���������
	Date& operator-=(int day);//-=���������
	Date operator-(int day);//-���������
	int operator-(Date& d);//���ڼ�����
	void print(void);
private:
	int _year;
	int _month;
	int _day;
};