/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	
	while (*str != '\0')
	{	if (*str >= 'A' && *str <= 'Z')
			*str = *str + 'a' - 'A';
		str++;
	}
	return (str);
}
/*
int main(void)
{
	char s[] = "dariusz!";
	printf("%d", ft_strlowcase(s));
	return (0);
}*/
