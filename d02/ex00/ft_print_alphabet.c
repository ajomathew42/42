#include <unistd.h>

int	ft_putchar(char c)
{
    write(1, &c, 1);
}

int	main(void)
{
    char    c;

    c = 'a';
    while (c <= 'z')
    {
    	ft_putchar(c);
	c++;
    }
}
