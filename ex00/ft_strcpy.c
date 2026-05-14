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
	#include <stdio.h>
	char buff[4] = "foo";
	if (argc > 1)
	{
	ft_strcpy(buff, argv[1]);
	printf("%s", buff);
	}
}
