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
//	int a = 10;//a�ɶ���д
//	const int& a1 = a;//a1����ֻ�ܶ�����д
//	//a1 = 12;//->����a1�Ĳ���Ȩ�޷Ŵ�
//	a = 12;
//	
//	const int b = 10;//b�Ĳ���ֻ�ܶ�����д
//	const int& b2 = b;//b2ֻ�ܶ�����д
//	//int& b3 = b2;
//	//int& b1 = b;//->��b��Ȩ�޷Ŵ�
//	
//	
//	double d = 1.11;
//	//d = a;//��ʽ����ת��
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