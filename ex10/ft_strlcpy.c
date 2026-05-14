unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	i = 0;

	while (src[i] != '\0')
	{
		if (i < size - 1)
			dest[i] = src[i];
		i++;
	}
	j = i;

	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}

	return (j);
}

int	main(int argc, char *argv[])
{
	#include <stdio.h>
	int l;
	char d[10];

	printf("%s\n", d);
	if (argc > 1)
	{
	l = ft_strlcpy(d, argv[1], 10);
	printf("%s\n", d);
	printf("%d", l);
	}
}
