#include "Date.h"
void test(void)
{
	Date d1(2018,5,26);
	Date d2(2022,1,1);
	////d1.print();
	//Date d3= d1 + 4;//->operator(&d2,4) 
	//d3 = d1 + 3;//->operator(&d2,4)
	////d3.print();
	Date d3 = d1 - 10;
	d1.print();
	d2.print();
	//d3.print();
	int days = d1 - d2;
	std::cout << days;
	//d1 += 4;//->operator+=(&d1,4)
	//d1 += 1;
	/*d1.print();
	d2.print();
	d3.print();*/
}
int main(void)
{
	test();
}