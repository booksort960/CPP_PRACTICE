#include <iostream>
int main(void)
{
	int arr[10][10];
	int n;
	std::cin >> n;
	int BoundaryUp = 1, BoundaryDown = n - 1, BoundaryLeft = 0, BoundaryRight = n - 1;//上的界壁是从1开始，走到界壁就开始转变方向
	int k = 1;
	int i = 0, j = 0;
	int direction = 1;//1是向右走，2，是向下走，3是向左走，4是向上走
	while (k <= n * n)
	{
		//先向右走，考虑有边界
		if (direction == 1)
		{
			arr[i][j++] = k++;
			if (j == BoundaryRight)
			{
				direction++;
				BoundaryRight--;
			}
		}
		else if (direction == 2)//向下走
		{
			arr[i++][j] = k++;
			if (i == BoundaryDown)
			{
				direction++;
				BoundaryDown--;
			}
		}
		else if (direction == 3)//向左走
		{
			arr[i][j--] = k++;
			if (j == BoundaryLeft)
			{
				direction++;
				BoundaryLeft++;
			}
		}
		else if (direction == 4)//向上走
		{
			arr[i--][j] = k++;
			if (i == BoundaryUp)
			{
				direction = 1;
				BoundaryUp++;
			}
		}
	}
	for (int a = 0; a < n; a++)
	{
		for (int b = 0; b < n; b++)
		{
			printf("%3d", arr[a][b]);
		}
		std::cout << std::endl;
	}

}