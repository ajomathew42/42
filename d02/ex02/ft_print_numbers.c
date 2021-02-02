#include <unistd.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
}

void main(void)
{
    char    number;

    number = '0';
    while (number <= '10')
    {
	ft_putchar(number);
	number++;
    }
}
