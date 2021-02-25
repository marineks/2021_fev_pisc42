// Write a program that takes two strings and displays, without doubles, the
// characters that appear in either one of the strings.

// The display will be in the order characters appear in the command line, and
// will be followed by a \n.

// If the number of arguments is not 2, the program displays \n.

// $>./union "rien" "cette phrase ne cache rien" | cat -e
// rienct phas$

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

void ft_onion(char *s1, char *s2)
{
    int i;
    int j;
    char *unified;
    int count;
    //int checked;

    i = 1;
    //checked = 0;
    unified = ft_strcat(s1, s2);
    if (unified[0] != '\0')
    {
        write(1, unified + 0, 1);
    }
    while (unified[i] != '\0')
    {
        j = i - 1;
        count = 0;
        while (j >= 0)
        {
            if (unified[i] == unified[j])
            {
                count++;
            }
            j--;
        }
        if (count == 0)
        {
            write(1, unified + i, 1);
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