#include <stdio.h>

// void    destructuration(unsigned int nb)
// {
//     unsigned int reste;
//     unsigned int modulo;
//     unsigned int firstnumber;

//     modulo = 10;
//     reste = 0;
//     firstnumber = 0;
//     while ((nb - (nb % modulo)) != 0 && nb > 20)
//     {
//         reste = nb - (nb % modulo);
//         modulo *= 10;
//     }
//      modulo = modulo / 10;
//     //printf("%d\n", reste);
//     //ft_itoa(reste);
//     firstnumber = (reste / modulo);
//     //reste = (reste / firstnumber);
//     //ft_itoa (reste);
//     reste = (reste * firstnumber);
//     if (nb > 20)
//     {
//         printf("%d", nb);
//         destructuration(nb - reste);
//     }
//     else
//     {
//         printf("%d", nb);
//         //ft_itoa(nb);
//     }
// }


void    decomp(unsigned long long int nb)
{
    unsigned long long int reste_modulo;
    unsigned long long int modulo;
    unsigned int first_digit;
    unsigned int decimals;
    unsigned int centaine;

    modulo = 10;
    if (nb <= 20)
    {
        printf("Le nombre de base est : %llu\n", nb);
    } else if (nb > 20 && nb <= 99)
    {
        printf("Le nombre de base est : %llu\n", nb);
        reste_modulo = nb % modulo; // pour 21 % 10 = 1
        decimals = nb - reste_modulo; // 21 - 1 = 20;
        printf("les unites sont : %llu\n", reste_modulo);
        printf("Decimale : %d\n", decimals);        
    } else if (nb > 99 && nb <= 199)
    {
        printf("Le nombre de base est : %llu\n", nb);
        reste_modulo = nb % modulo; // pour 123 % 10 = 3
        printf("les unites sont : %llu\n", reste_modulo);
        centaine = nb - reste_modulo; // 123 - 3 = 120;
        decimals = centaine % (modulo * 10); // 120 % 100 = 20
        centaine = centaine - decimals; // 120 - 20 = 100
        printf("Decimale : %d\n", decimals);
        printf("Centaine : %d\n", centaine);     
    } else if (nb > 199 && nb <= 9999999999999999999999) // 9999999999999999999999999999999999999 ne rentre pas
    {
        reste_modulo = nb % modulo;
        decimals = nb - reste_modulo;
        decomp(nb - reste_modulo);
    }
}










int main()
{
    //destructuration(9);
    decomp(30);
    return(0);
}