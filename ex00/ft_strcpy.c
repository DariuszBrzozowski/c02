#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*temp;
	
	temp = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (temp);
}

int	main(int argc, char *argv[])
{
	char buff[256] = "foo";
	ft_strcpy(buff, argv[1]);
	printf("%s", buff);
}
