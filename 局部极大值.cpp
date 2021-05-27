#include <iostream>

int main(void)
{
    int m, n;
    int arr[20][20];
    std::cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            std::cin >> arr[i][j];
    }

    int flag = 0;
    for (int i = 1; i < m - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            int num = arr[i][j];
            if (num > arr[i - 1][j] && num > arr[i + 1][j] && num > arr[i][j - 1] && num > arr[i][j + 1])
            {
                flag = 1;
                std::cout << arr[i][j] << " " << i + 1 << " " << j + 1 << std::endl;
            }
        }
    }
    if (flag == 0)
        std::cout << "None " << m << " " << n << std::endl;
    return 0;
}