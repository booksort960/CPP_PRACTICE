#include <iostream>
int& add(int a, int b)
{
	static int c;
	//static c = a + b;//��������ڶ��β���ı�c��ֵ������Ϊ��̬���������������������������ڡ�
	//���ڶ���ִ�е�ʱ�򣬾Ͳ���ִ����һ�У���������
	c = a + b;//����������Ϳ��Է��ʵ�C�Ŀռ䣬���Խ��и�ֵ
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