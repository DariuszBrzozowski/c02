/*#include <stdio.h>*/

char	*ft_strcapitalize(char *str)
{
	char	*start;
	int	new_word;

	start = str;
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
	return (start);
}
/*
int main(void)
{
	char s[] = "dariusz!";
	printf("%d", ft_strcapitalize(s));
	return (0);
}*/
