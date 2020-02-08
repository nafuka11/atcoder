#include <stdio.h>

int	main(void)
{
	int n;
	int r;
	int l;
	int	seats[100000] = {0};
	int result = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &l, &r);
		for (int j = l; j <= r; j++)
		{
			seats[j - 1] = 1;
		}
	}
	for (int i = 0; i < 100000; i++)
	{
		if (seats[i])
		{
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
