#include <iostream>
int main(void)
{
	int arr[10][10];
	int n;
	std::cin >> n;
	int BoundaryUp = 1, BoundaryDown = n - 1, BoundaryLeft = 0, BoundaryRight = n - 1;//�ϵĽ���Ǵ�1��ʼ���ߵ���ھͿ�ʼת�䷽��
	int k = 1;
	int i = 0, j = 0;
	int direction = 1;//1�������ߣ�2���������ߣ�3�������ߣ�4��������
	while (k <= n * n)
	{
		//�������ߣ������б߽�
		if (direction == 1)
		{
			arr[i][j++] = k++;
			if (j == BoundaryRight)
			{
				direction++;
				BoundaryRight--;
			}
		}
		else if (direction == 2)//������
		{
			arr[i++][j] = k++;
			if (i == BoundaryDown)
			{
				direction++;
				BoundaryDown--;
			}
		}
		else if (direction == 3)//������
		{
			arr[i][j--] = k++;
			if (j == BoundaryLeft)
			{
				direction++;
				BoundaryLeft++;
			}
		}
		else if (direction == 4)//������
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