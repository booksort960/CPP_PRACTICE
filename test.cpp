#include <iostream>
int main()
{
	using namespace std;
	float x = 1, y1 = 2.1 / 1.9, y2 = 1.9 / 2.1;
	int i = 0; int n = 0;
	for (i = 1; i < 22; i++)
		x *= y1;
	while (x != 1.0)
	{
		x *= y2;
		n++;
	}
	cout << n;
	return 0;
}//由于浮点数是不能精确相等的所以无论如何，这不是纯粹的数学运算