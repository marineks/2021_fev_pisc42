#include <stdio.h>

char *ft_strlowcase(char *str)
{
    int i;
    
    i = 0;
   
    
        while (str[i] != '\0')
        {
            if (str[i] > 64 && str[i] < 91)
            {

            str[i] = str[i] + 32;     
            }
        i++;
    }

    printf("%s", str);
    return (str);
}
int main(void)
{
    char test[] = {"HELLO HIHI"};

    ft_strlowcase(test);
    return (0);
}
