#include <unistd.h>

void ft_rev_int_tab(int *tab, int size)
{
    int i;
    int sorted_tab[size];

    i = 0;
    while (i < size)
    {
        i++;
        sorted_tab[size - 1 - i] = *(tab + i);
    }
    i = 0;
    while (i < size)
    {
        i++;
        tab[i] = sorted_tab[i];
    }
}

int main(void)
{
    int arr;
    ft_rev_int_tab(&arr, 5);
    return (0);
}

// pistes
/* 
1 - prendre l'index et le retourner?
2 - créer un array dans lequel on va mettre les valeurs de l'array 
donné mais dans l'autre sens et retourner cet array

8 fev 2021 : stack smashing detected car jessaye d acceder
a un element hors de l array A CORRIGER
*/
