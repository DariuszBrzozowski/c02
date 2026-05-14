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

char	*ft_strupcase(char *str)
{
	char	*temp;
	temp = str;

	while (*str != '\0')
	{	if (*str >= 'a' && *str <= 'z')
			*str = *str -'a' + 'A';
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
		printf("%s", ft_strupcase(s));
	}
	return (0);
}
