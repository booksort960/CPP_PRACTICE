//#include <stdio.h>
//void swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main(void)
//{
//	int a = 10, b = 30;
//	printf("%d %d\n", a, b);
//	swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}
//#include <iostream>
//int main(void)
//{
//	int a = 1;
//	int m = 10;
//	int& b = a;
//	int& c = b;
//	int& d = m;
//	c = d;
//	printf("a=%d", a);
//	return 0;
//}
//#include <iostream>
//int main(void)
//{
//	
//	int a = 10;//a可读可写
//	const int& a1 = a;//a1操作只能都不能写
//	//a1 = 12;//->对与a1的操作权限放大
//	a = 12;
//	
//	const int b = 10;//b的操作只能都不能写
//	const int& b2 = b;//b2只能读不能写
//	//int& b3 = b2;
//	//int& b1 = b;//->对b的权限放大
//	
//	
//	double d = 1.11;
//	//d = a;//隐式类型转换
//	//a = d;
//	double& tmp = a;
//	const double& tmp1 = a;
//}
//#include <iostream>
//int& add(int a, int b)
//{
//	static int c = a + b;
//	return c;
//}
//int main(void)
//{
//	int& ret = add(10, 20);
//	std::cout << ret<<std::endl;
//	add(20, 50);
//	std::cout << ret;
//
//	return 0;
//}