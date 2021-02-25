
#include <unistd.h>

void searchreplace(char *str, char replaced, char replacing)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == replaced)
        {
            str[i] = replacing;
            write(1, str + i, 1);
        } else
        {
            write(1, str + i, 1);
        }
        i++;
    }   
}

int main(int ac, char **av)
{
    if (ac == 4)
    {
        searchreplace(av[1], av[2][0], av[3][0]);
    } else
    {
        write(1, "\n", 1);
    }
    
}