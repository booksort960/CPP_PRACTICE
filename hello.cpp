#include <iostream>
#include <climits>
void test(void);
int main(void)
{
	using namespace std;
	cout << "hello world" <<endl;
	test();
	return 0;
}
void test(void)
{
	using namespace std;
	int num;
	cout << "please input a number" << endl;
	cin >> num;
	cout << "The number is " << num << " , it is ok." << endl;
}