#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define BUF_SIZE 4096 // 4096 => taille la plus grande pour être sûr

int i_open_at_the_close()
{
    int fd;
    int retour; // nombre d'octets à lire
    char buf[BUF_SIZE + 1];
    char *number_to_find;

    fd = open("numbers.dict", O_RDWR); // en RDWR car dans l'énoncé on peut modif le dico, ce que fera certainement le tuteur (?)
    if (fd == -1)
    {
        ft_putstr("Dict Error\n");
        return (1);
    }
    while (retour = read(fd, buf, BUF_SIZE))
    {
        buf[retour] = '\0';
        // ft_putnbr(retour)
        ft_strstr(buf, number_to_find); // renvoie (buf = str + i si number_to_find trouvé)
        ft_trim_results(buf);
    }
    // ft_putnbr(retour) => 0 quand on arrive à la fin du fichier
    if (close(fd) == -1)
    {
        ft_putstr("Dict Error\n");
        return (1);
    }
    return (0);
}