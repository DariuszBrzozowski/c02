char	*ft_strcapitalize(char *str)
{
	char	*temp;
	int	new_word;

	temp = str;
	new_word = 1;
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		{
			if (new_word && *str >= 'a' && *str <= 'z')
				*str = *str - 'a' + 'A';
			else if (!new_word && *str >= 'A' && *str <= 'Z')
				*str = *str - 'A' + 'a';
			new_word = 0;
		}
		else if (!(*str >= '0' && *str <= '9'))
			new_word = 1;
		str++;
	}
	return (temp);
}

int main(int argc, char *argv[])
{
	#include <stdio.h>

	if (argc > 1)
	{
		printf("%s", ft_strcapitalize(argv[1]));
	}
	return (0);
}
