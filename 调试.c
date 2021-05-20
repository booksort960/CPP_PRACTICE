//#include <stdio.h>
//int main(void)
//{
//	double sum = 0;
//	int fz = 1, fm = 1;
//	int i = 1;
//	double exp;
//	scanf_s("%lf", &exp);
//	for (; (1.0*fz / fm) > exp; fm += 3)
//	{
//		sum += (1.0 * i * fz) / fm;
//		i = -1 * i;
//	}
//	sum += (1.0 * i * fz) / fm;
//	printf("=%.6lf", sum);
//	return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//	double sum = 1;
//	double fz = 1, fm = 1;
//	int i = -1;
//	double exp;
//	scanf_s("%lf", &exp);
//	while (fz / fm > exp)
//	{
//		fm += 3;
//		sum += 1.0 * i * fz / fm;
//		if (i == 1)
//			printf(" ");
//		printf("%d*%lf/%lf ", i, fz, fm);
//		printf("  %lf   %lf\n", 1.0 * fz / fm,sum);
//		i = -i;
//
//	}
//	printf("=%.6lf", sum);
//	return 0;
//}