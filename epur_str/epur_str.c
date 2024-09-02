#include <unistd.h>

void	ft_putchar (char c)
{
	write (1, &c, 1);
}

char	*ft_checkfinal (char *str)
{
	int i = 0;
	int n = 1;
	while (str[i] != '\0')
		i++;
	while (str[i - n] == ' ')
	{
		str[i - n] = str[i];
		n++;
	}
	return (str);
}
void	epur_str (char *str)
{	
	char *strr = ft_checkfinal(str);

	int i = 0;
	while(strr[i] == ' ')
		i++;

	while (strr[i] != '\0')
	{
		while (strr[i] == ' ' && strr[i - 1] == ' ')
			i++;
		ft_putchar (strr[i]);
		i++;
	}
}

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar ('\n');
		return (-1);
	}
	
	epur_str(argv[1]);
	ft_putchar('\n');
	return (0);
}
