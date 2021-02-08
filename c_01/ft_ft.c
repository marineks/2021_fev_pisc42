#include <stdio.h>

void    ft_ft(int *wen)
{

    *wen = 42;
    printf("%p\n", wen);
}

int		main(void)
{
    int tiff =100;
	ft_ft(&tiff);
    printf("%d",tiff);
    printf("%p\n", &tiff);
	return (0);
}