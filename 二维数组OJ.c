#include<iostream> 
//#include <cstring>
//int main(void)
//{
//    int n;
//    std::cin >> n;
//
//    char arr[80];
//    char arr2[80];
//    std::cin >> arr;
//    int len = strlen(arr);
//    int max = len;
//    for (int i = 1; i < n; i++)
//    {
//        std::cin >> arr2;
//        len = strlen(arr2);
//        if (max < len)
//        {
//            max = len;
//            strcpy_s(arr, arr2);
//        }
//    }
//
//    std::cout << "The longest is: " << arr;
//}
#include <iostream>
//#include <cstring>
//int compare(const void* e1, const void* e2)
//{
//    return *((char*)e1) - *((char*)e2);
//}
//int main(void)
//{
//    char ch;
//    int i = 0;
//    char arr[81];
//    while ((ch = getchar()) != '\n')
//    {
//        arr[i++] = ch;
//    }
//    arr[i] = '\0';
//    int len = strlen(arr);
//    qsort(arr, len, sizeof(char), compare);
//    int j = 0;
//    int a = 1;
//    while (a < len)
//    {
//        if (arr[j] != arr[a])
//            arr[++j] = arr[a];
//        a++;
//    }
//    arr[j+1] = '\0';
//    std::cout << arr;
//}