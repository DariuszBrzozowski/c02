#include <stdio.h>
#include <unistd.h>

void ascii_to_hex(char *buf)
{
   int	mod;
   char temp;
   int	dv;
   
  dv = *buf;

  while (dv > 0)
  {

	   mod = dv%16;
	   if (mod < 10)
		   temp = '0' + mod;
	   else
		   temp = 'a' + mod - 10;
	   write(1, &temp, 1);
	   dv = (dv)/16;
  }
}

void ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 31)
			write(1, str, 1);
		/*else
		{
			write(1, "\\", 1);
			ascii_to_hex(str);
		}*/
		str++;
	}
}
