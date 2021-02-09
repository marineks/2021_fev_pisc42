#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb + '0');
	}

	else if (nb > 0)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}

}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while(a < 99)
	{
                b = a;
		while(b < 100)
		{
			if(a != b)
			{
				if(a <= 9)
				{
					ft_putchar('0');
				}
				ft_putnbr(a);
				ft_putchar(' ');
				if(b <= 9)
				{
					ft_putchar('0');
				}
                ft_putnbr(b);
                if (!(a == 98 && b == 99))
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
			}
			b++;	
		}	
		a++;
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
//////////////////////////////////////////////////////////
