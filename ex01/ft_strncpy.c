#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char	*temp;

	i = 0;
	temp = dest;
	while (i < n  && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (temp);
}
/*
int	main(void)
{
	char d[10];
	printf("%s", d);
	char s[] = "DariuszBRZOZOWSKI";
	ft_strncpy(d, s, 5);
	printf("%s", d);
}*/
