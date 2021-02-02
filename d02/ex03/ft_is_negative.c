#include <unistd.h>

int	ft_putchar(int c)
{
    write(1, &c, 1);
}

void    main(int n)
{
    if (n < 0)
    {
	ft_putchar('N');
    }
    else
    {
	ft_putchar('P');
    }
}


