/*#include <stdio.h>*/

char	*ft_strupcase(char *str)
{
	
	while (*str != '\0')
	{	if (*str >= 'a' && *str <= 'z')
			*str = *str + 'A' - 'a';
		str++;
	}
	return (str);
}
/*
int main(void)
{
	char s[] = "dariusz!";
	printf("%d", ft_str_is_upppercase(s));
	return (0);
}*/
