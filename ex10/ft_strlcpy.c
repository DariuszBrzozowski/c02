#include <stdio.h>

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
/*
int	main(void)
{
	char d[10];
	printf("%s", d);
	char s[] = "DariuszBRZOZOWSKI";
	ft_strlcpy(d, s, 10);
	printf("%s", d);
}*/
