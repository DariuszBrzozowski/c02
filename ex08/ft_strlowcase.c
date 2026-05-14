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

char	*ft_strlowcase(char *str)
{
	char	*temp;
	temp = str;

	while (*str != '\0')
	{	if (*str >= 'A' && *str <= 'Z')
			*str = *str -'A' + 'a';
		str++;
	}
	return (temp);
}

int main(int argc, char *argv[])
{
	#include <stdio.h>

	char s[256];

	if (argc > 1)
	{
		ft_strcpy(s, argv[1]);
		printf("%s", ft_strlowcase(s));
	}
	return (0);
}
