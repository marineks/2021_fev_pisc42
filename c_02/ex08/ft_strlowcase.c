#include <stdio.h>

char *ft_strlowcase(char *str)
{
    int i;
    int is_alpha_uppercase;

    i = 0;
    is_alpha_uppercase = str[i] <= 90 && str[i] >= 65;
    if (is_alpha_uppercase)
    {
        while (str[i] != '\0')
        {
            str[i] = str[i] + 32;
            i++;
        }
    }

    printf("%s", str);
    return (str);
}
int main(void)
{
    char test[] = {'H', 'E', 'L', 'L', 'O'};

    ft_strlowcase(test);
    return (0);
}
