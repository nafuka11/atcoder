#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	long	price;
	int		num;
} t_shop;


int	cmp(const void *a, const void *b)
{
	t_shop *s1 = (t_shop *)a;
	t_shop *s2 = (t_shop *)b;

	if (s1->price < s2->price)
	{
		return (-1);
	}
	if (s1->price > s2->price)
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	int		n;
	int		m;
	t_shop	shops[100000];
	long	money = 0;

	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		scanf("%ld %d", &shops[i].price, &shops[i].num);
	}
	qsort(shops, n, sizeof(t_shop), cmp);
	for (int i = 0; i < n; i++)
	{
		if (shops[i].num >= m)
		{
			printf("%ld\n", money + shops[i].price * m);
			return (0);
		}
		else
		{
			money += shops[i].price * shops[i].num;
			m -= shops[i].num;
		}
	}
	return (0);
}
