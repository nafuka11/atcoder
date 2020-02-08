#include <stdio.h>

int	main(void)
{
	int n;

	scanf("%d", &n);
	n = 2025 - n;
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			if (n == i * j)
			{
				printf("%d x %d\n", i, j);
			}
			if (n < i * j)
			{
				break;
			}
		}
	}
}