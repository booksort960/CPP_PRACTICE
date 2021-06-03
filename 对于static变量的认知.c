#include <iostream>
int& add(int a, int b)
{
	static int c;
	//static c = a + b;//对于这个第二次不会改变c的值，是因为静态变量的生命周期是整个程序周期。
	//当第二次执行的时候，就不会执行这一行，会跳过。
	c = a + b;//而有这个，就可以访问到C的空间，可以进行赋值
	return c;
}
int main(void)
{
	int& ret = add(10, 20);
	std::cout << ret << std::endl;
	int& rett = add(20, 50);
	std::cout << ret << std::endl;
	std::cout << rett << std::endl;
	return 0;
}
#include <iostream>
int main(void)
{
	static int num = 10;
	std::cout << num << std::endl;
	//num = 20;
	std::cout << num << std::endl;
	return 0;
}