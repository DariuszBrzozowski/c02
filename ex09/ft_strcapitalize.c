/*#include <stdio.h>*/

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	
	while (*str != '\0')
	{	
		if (i == 0 && *str >= 'a' && *str <= 'z')
			*str = *str + 'A' - 'a';
		else if (i > 0 && *str >= 'A' && *str <= 'Z')
			*str = *str + 'a' - 'A';
		if (*str >= 'a' && *str <= 'z')
			i++;
		else if (*str >= 'A' && *str <= 'Z')
			i++;
		else if (*str >= '0' && *str <= '9')
			i++;
		else
			i = 0;
		str++;
	}
	return (str);
}
/*
int main(void)
{
	char s[] = "dariusz!";
	printf("%d", ft_strcapitalize(s));
	return (0);
}*/
