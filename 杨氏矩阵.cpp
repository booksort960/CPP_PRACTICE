#include <stdio.h>
int main(void)
{
	int key = 13;
	int N = 4;
	int arr[4][4] = {1,2,8,9,
					2,4,9,12,
					4,7,10,13,
					6,8,11,15};
	for (int i = 0; i < N; i++)
	{
		if (key > arr[i][0])
		{
			if (key <= arr[i][3])//´¥·¢¹ÕÍä
			{
				for (int j = 0; j < N; j++)
				{
					if (key == arr[i][j])
					{
						printf("Find Out->%d %d", i, j);
						return 0;
					}
				}
			}
			else
				continue;
		}
	}
	printf("Not Found");
	return 0;
}