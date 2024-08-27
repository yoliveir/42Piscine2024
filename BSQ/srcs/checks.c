int	karekontrol(char **map, t_pivot pvt)
{
	int	x;
	int	y;

	x = pvt.x;
	while (x < (pvt.x + pvt.size))
	{
		y = pvt.y;
		while (y < (pvt.y + pvt.size))
		{
			if (map[x][y] == 'o')
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}

int	canpivot(char **map, t_pivot pvt, int size)
{
	return ((pvt.x + pvt.size < size) && (pvt.y + pvt.size < size));
}

t_pivot	verificapivot(char **map, int size, t_pivot pvt)
{
	while (canpivot(map, pvt, size))
	{
		if (karekontrol(map, pvt) == 1)
			return (pvt);
		pvt.y++;
	}
	return (pvt);
}

t_pivot	gezcontrol(char **map, int size)
{
	t_pivot	pvt;

	pvt.size = size;

	while (pvt.size > 0)
	{
		pvt.x = 0;
		while (pvt.x + pvt.size < size)
		{
			pvt.y = 0;
			pvt = verificapivot(map, size, pvt);
			if (pvt.y != 0)
				return (pvt);
			pvt.x++;
		}
		pvt.size--;
	}
	pvt.x = 0;
	pvt.y = 0;
	pvt.size = 0;
	return (pvt);
}
