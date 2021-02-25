// Write a program that takes two strings and displays, without doubles, the
// characters that appear in both strings, in the order they appear in the first
// one.

// The display will be followed by a \n.

// If the number of arguments is not 2, the program displays \n.
// $>./inter "rien" "cette phrase ne cache rien" | cat -e
// rien$

#include <unistd.h>

char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    while (dest[i])
    {
        i++;
    }
    j = 0;
    while (src[j])
    {
        dest[i] = src[j];
        j++;
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int check_doublons(char *str, char c, int i)
{
    int j;

    j = 0;
    while (j < i)
    {
        if (str[j] == c)
        {
            return (0);
        }
        j++;
    }
    return (1);
}

void ft_onion(char *s1, char *s2)
{
    int i;
    int j;
    int count;
    //char *all;

    i = 0;
    j = 0;
    //all = ft_strcat(s1, s2);
    //checked = 0;
    while (s1[i])
    {
        count = 0;
        j = 0;
        while (s2[j])
        {
            if (s1[i] == s2[j])
            {

                count++;
            }
            j++;
        }
        if (count > 0)
        {
            if (check_doublons(s1, s1[i], i) == 1)
            {
                write(1, s1 + i, 1);
            }
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        ft_onion(av[1], av[2]);
    }
    else
    {
        write(1, "\n", 1);
    }
    return (0);
}
