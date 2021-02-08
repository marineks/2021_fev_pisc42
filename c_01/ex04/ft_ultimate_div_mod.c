#include <stdio.h>
#include <unistd.h>

void ft_div_mod(int *a, int *b)
{
    int c;
    c = *a;

    *a = *a / *b;

    printf("%d\n", *a); // après maintes essais, il faut mettre %d et *ptr
    *b = c % *b;

    printf("%d\n", *b);
}

int main(void)
{
    int divtest = 16;
    int modtest = 2;

    int *divsnd;
    int *modsnd;

    divsnd = &divtest;
    modsnd = &modtest;
    ft_div_mod(divsnd, modsnd);
    return (0);
}