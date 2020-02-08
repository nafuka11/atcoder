#include <stdio.h>

int	main(void)
{
	int		h;
	int		m;
	double	angle;

	scanf("%d %d", &h, &m);
	angle = (360 / 12 * h) % 360 + (360 / 12 * (m / 60.0)) - 360 / 60 * m;
	if (angle < 0)
	{
		angle *= -1;
	}
	if (angle > 180)
	{
		angle = 360 - angle;
	}
	printf("%.4f\n", angle);
	return (0);
}
