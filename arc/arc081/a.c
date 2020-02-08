#include <stdio.h>
#include <stdlib.h>

int	desc(const void *a, const void *b)
{
	long *v1 = (long *)a;
	long *v2 = (long *)b;

	return (*v2 - *v1);
}

int	main(void)
{
	int		n;
	long	a[100000];
	long	side[2] = {};

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%ld", &a[i]);
	}
	qsort(a, n, sizeof(long), desc);
	for (int i = 1; i < n; i++)
	{
		if (a[i - 1] == a[i])
		{
			if (side[0] == 0)
			{
				side[0] = a[i];
			}
			else
			{
				side[1] = a[i];
				break;
			}
			i++;
		}
	}
	printf("%ld\n", side[0] * side[1]);
	return (0);
}
