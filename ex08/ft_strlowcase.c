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

	if (argc > 1)
	{
		printf("%s", ft_strlowcase(argv[1]));
	}
	return (0);
}
