#include <stdio.h>
#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;

    printf("%d\n", *div); // après maintes essais, il faut mettre %d et *ptr
    *mod = a % b;

    printf("%d\n", *mod);
}

int main(void)
{
    int divtest = 100;
    int modtest = 5;

    int *divsnd;
    int *modsnd;

    divsnd = &divtest;
    modsnd = &modtest;
    ft_div_mod(13, 2, divsnd, modsnd);
    return (0);
}