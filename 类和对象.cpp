//#include <iostream>
//int main(void)
//{
//	char arr = 'c';
//	char* p = &arr;
//	printf("%p\n", p);
//	/*std::cout << (void*)p<<std::endl;
//	std::cout << (int*)(p+1)<<std::endl;*/
//	std::cout << p;
//	return 0;
//}
//#include <iostream>
////using namespace std;
//class Point
//{
//public:
//    Point(double xx = 0, double yy = 0)
//    {
//        _x = xx;
//        _y = yy;
//    }
//    void Set(double xx, double yy)
//    {
//        _x = xx;
//        _y = yy;
//    }
//    void Output()
//    {
//        std::cout << "(" << _x << "," << _y << ")" << std::endl;
//    }
//    double GetX()
//    {
//        return _x;
//    }
//    double GetY()
//    {
//        return _y;
//    }
//private:
//    double _x, _y;
//};
//int main()
//{
//    double m, n;
//    std::cin >> m >> n;
//    Point p1;
//    p1.Output();
//    p1.Set(m, n);
//    p1.Output();
//
//    Point p2(3, 4);
//    std::cout << p2.GetX() << "," << p2.GetY() << std::endl;
//    return 0;
//}
//#include <iostream> 
//class Ana
//{
//public:
//	void ShowData();//չʾ����
//	void Teletherapy(bool input);//Զ������
//	void SleepyNeedle(bool input);//˯��
//private:
//	char Name[20];//����
//	int Weight;//����
//	int Height;//���
//	double Speed;//�ƶ��ٶ�
//	double Blood;//Ѫ��
//};
//int main(void)
//{
//	Ana a1;
//	Ana a2;
//	std::cout << "a1 = "<<sizeof(a1)<<std::endl;
//	std::cout << "a2 = "<<sizeof(a2)<< std::endl;
//	return 0;
//}
#include <iostream>
//
//
//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Date(Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//	bool operator==(const Date& d)
//	{
//		return (_year == d._year) && (_month == d._month) && (_day = d._day);
//	}
//	void print(void)
//	{
//		std::cout << _year << "��" << _month << "��" << _day << "��" << std::endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main(void)
//{
//	
//	Date d1(2020,1,3);
//	Date d2(d1);
//	std::cout << (d1 == d2) << std::endl;
//	d1.print();//->print(&d1)
//	d2.print();//->print(&d2)
//}
//class Array
//{
//public:
//	Array()
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			_arr[i] = i;
//		}
//		_size = 10;
//	}
//	int operator[](int pos)
//	{
//		return _arr[pos];
//	}
//	int GetSize(void)
//	{
//		return _size;
//	}
//private:
//	int _arr[10];
//	int _size;
//};
//int main(void)
//{
//	Array arr;
//	for (int i = 0; i < arr.GetSize(); i++)
//	{
//		std::cout << arr[i] << " ";
//	}
//	return 0;
//}
//void operator=(Date& d)
//{
//	if (this != &d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//}
//#include <iostream>
//
//
#include <iostream>
class Time;
class Date
{
public:
	Date(int year = 1, int month = 1, int day = 1)

		:_year(year)
		, _month(month)
		, _day(day)
		,i(10)
		,ret(_year)
		,t(0)
	{
		_year = 100;
		_year = 200;
	}
	
	bool operator==(const Date& d)
	{
		return (_year == d._year) && (_month == d._month) && (_day = d._day);
	}
	void print(void)
	{
		std::cout << _year << "��" << _month << "��" << _day << "��" << std::endl;
	}

private:
	int _year;
	int _month;
	int _day;
	const int i;
	int& ret;
	Time t;
};
class Time
{
public:
	Time(int t)
	{
		_t = t;
	}
private:
	int _t;
};
int main(void)
{
	Date d1;
	d1.print();
}
//int main(void)
//{
//
//	Date d1(2020, 1, 3);
//	Date d2;
//	d2 = d1;
//	d1.print();//->print(&d1)
//	d2.print();//->print(&d2)
//}