// Write a program called repeat_alpha that takes a string and display it
// repeating each alphabetical character as many times as its alphabetical index,
// followed by a newline.

// 'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

// Case remains unchanged.

// If the number of arguments is not 1, just display a newline.
#include <unistd.h>

// int     ft_strlen(char *str)
// {
//     int i;

//     i = 0;
//     while (str[i])
//     {
//         i++;
//     }
//     return (i);
// }

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    repeat_alpha(char *str)
{
   int  i;
   int  j;
   // a b c d e f g h i j k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z 
   // 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25

   i = 0;
   j = 0;
   
   while (str[i])
   {
       j = 0;
       if (str[i] > 96 && str[i] < 123)
       {
            while ((j < (str[i] - 96))) 
            {
                ft_putchar(str[i]);
                j++;
            } 
       }
       if (str[i] > 64 && str[i] < 91)
       {
           while ((j < (str[i] - 64)))
            {
                ft_putchar(str[i]);
                j++;
            } 
       } 
       else if ((str[i] > 30 && str[i] < 65) || (str[i] > 90 && str[i] < 97) || str[i] > 122)
       {
           ft_putchar(str[i]);
       }
       
       i++; 
   }
}

int     main(int ac, char **av)
{
    if (ac == 2)
    {
        repeat_alpha(av[1]);
    } 
    else
    {
        write(1, "\n", 1);
    }
}