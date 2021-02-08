#include <unistd.h>
#include <string.h>

char ft_strlen(char *str)
{
    int i;

    i = 0;
    while (*(str + i) != '\0')
    {
        i++;
    }
    return (i);
}

void ft_putstr(char *str)
{
    write(1, str, ft_strlen(str));
}

int main(void)
{
    ft_putstr("hihihihi ca marche COUCOU");
    return (0);
}

// recoder la fonction strlen :
// chaque valeur stockée à une adresse se finit par \o.
// il faut donc dire à l'ordi que lorsque le dernier caractère du tableau
// est un \o, il faut arreter le loop. Dans le loop, prendre une variable i
// que l'on va incrémenter à chaque fois que le pointeur se déplace d'un
// dans le tableau jusqu'au fameux \o . ce chiffre sera la longueur
// du string.

// ------------ RETENIR : ---------------
// Les STRINGS sont des TABLEAUX 1D en C.
// Le dernier élt de ce tableau: \O
