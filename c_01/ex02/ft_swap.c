#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int c;

    c = 0;

    c = *a;  // je store la valeur de a dans c
    *a = *b; // a devient b
    *b = c;  // b récupère la valeur initale de a
}

int main()
{
    int a = 142;
    int b = -24;
    printf("%d\n", a);
    printf("%d\n", b);
    ft_swap(&a, &b);
    printf("%d\n", a);
    printf("%d\n", b);
    return (0);
}