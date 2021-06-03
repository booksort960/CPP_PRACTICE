//#include<iostream> 
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
//#include <iostream>
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
//#include <iostream>
//#include <cstring>
//int main(void)
//{
//    int a = 0;
//    char ch;
//    char arr1[500001];
//    char arr2[500001];
//    while ((ch = getchar()) != '\n')
//    {
//        arr1[a++] = ch;
//    }
//    arr1[a] = '\0';
//    int len = strlen(arr1);
//    int i = 0;
//    int dest = len - 1;
//    while (dest >= 0)
//    {
//        if (arr1[dest] == ' ' && arr1[dest + 1] != ' ' && arr1[dest + 1] != '\0' || (dest == 0 && arr1[0] != ' '))
//        {
//            if (i != 0)
//                arr2[i++] = ' ';
//            int last = dest + 1;
//            if (dest == 0 && arr1[0] != ' ')
//            {
//                last = dest;
//            }
//            while (arr1[last] != ' ' && arr1[last] != '\0')
//            {
//                arr2[i++] = arr1[last++];
//            }
//        }
//        dest--;
//    }
//    arr2[i] = '\0';
//    std::cout << arr2 << std::endl;
//    return 0;
//}
#include <iostream>
#include <cstring>
int main(void)
{
    int a = 0;
    char ch;
    char arr1[500001];
    char arr2[500001];
    while ((ch = getchar()) != '\n')
    {
        arr1[a++] = ch;
    }
    arr1[a] = '\0';
    int len = strlen(arr1);
    int i = 0;
    int dest = len - 1;
    while (dest >= 0)
    {
        if (arr1[dest] == ' ' && arr1[dest + 1] != ' ' && arr1[dest + 1] != '\0' || (dest == 0 && arr1[0] != ' '))
        {
            if (i != 0)
                arr2[i++] = ' ';
            int last = dest + 1;
            if (dest == 0 && arr1[0] != ' ')
            {
                last = dest;
            }
            while (arr1[last] != ' ' && arr1[last] != '\0')
            {
                arr2[i++] = arr1[last++];
            }
        }
        dest--;
    }
    arr2[i] = '\0';
    std::cout << arr2 << std::endl;
    return 0;
}