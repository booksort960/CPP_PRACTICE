#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n, i, j = 0;
    for (n = 100; n <= 200; n++)
    {
        for (i = 2; i < n;)
        {
            if (n % i == 0)
                break;
            i++;
            if (n == i)
            {
                cout << setw(4) << n;
                j++;
            }
            
        }
        if (j == 5)
        {
            j = 0;
            cout << endl;
        }
    }
    return 0;
}
