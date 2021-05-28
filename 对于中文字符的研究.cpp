//#include <iostream>
//int main(void)
//{
//	char arr[3];
//	std::cin >> arr;
//	std::cout << arr;
//	return 0;
//}
//对于中文字符而言，一个中文字符占两个字节，对于中文的输入，相当于字符串的输入，末尾自动加如一个'\0'替换'\n'
//#include <iostream>
//#include <cstring>
//int main(void)
//{
//    char arr[4][20];
//    for (int i = 0; i < 4; ++i)
//    {
//        std::cin>>arr[i];
//    }
//    for (int i = 0; i < 4; ++i)
//    {
//        int len = strlen(&arr[i][0]);
//        std::cout << &arr[i][len - 2];//std::cout << arr[i][len - 2];
//    }
//    std::cout << std::endl;
//    return 0;
//}
//对于数组而言
// 除了，sizeof(数组名） 与 &数组名  代表整个数组，以外，其都是都是别的意思

//对于一个二维数组而言，int arr[4][5];
//&arr代表整个数组的地址，也就是&arr[0][0]所表示的值,能指向他的指针的类型是能指向整个数组->>int (* )[4][5];
//arr则于arr+0,arr+1是一个类型，也就是代表这一行的地址,其指针类型是->>int (* )[5]
//&arr[i]->&*(arr+i),是这一行的地址。-->>int (* )[5]
//arr[i]->*(arr+i)+0是一个意思是某个元素的地址-->> int* ; 
//&arr[i][j]->&*(*(arr+i)+j),也是某个元素的地址。-->>int* 
//指针的类型也是一级一级的降

//对于一维数组  int arr[4];
// 其arr就是 arr+0 -- (arr+0) --&arr[0],也就是首元素地址
//如果要输入字符串，
// scanf("%s",arr);
//std::cin >> arr;




/////////////cin 与 cout认知
//#include <iostream>
//int main(void)
//{
//	char arr[10];
//	char ch;
//	std::cin >> ch;
//	std::cin >> arr;//将输入流引入目标空间的地址-》对于字符串而言；
//	std::cout << arr<<std::endl;
//	std::cout << ch;
//	return 0;
//}

//对于cout而言
//如果是变量而言，直接引入变量名就可以智能读取。
//但对于字符串而言，需要引入其地址才能获取

//对与cin而言
//对于变量而言，直接引入变量名就可以智能读取。
//但对于字符串而言，需要引入其地址才能获取