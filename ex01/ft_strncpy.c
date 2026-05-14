#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
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
	return (dest);
}

int	main(int argc, char *argv[])
{
	int	i;
	char 	d[10] = "foo";
	i = 0;
	if (argc == 2)
	{
		ft_strncpy(d,argv[1], 8);
		while (d[i] != '\0')
		{
			write(1, &d[i], 1);
			i++;
		}
	}
}
