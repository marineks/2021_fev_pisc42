
void reverse_str(char str[], int size)
{
    int i;
    int j;
    int temp;

    i = 0;
    j = size - 1;
    while (i < j)
    {
        str[temp] = str[j]; // swap
        str[i] = str[j];
        str[i] = str[j];
        i++;
        j--;
    }
}

// Implementation of itoa()
char *itoa(unsigned long long int nb, char *str)
{
    int i = 0; // compteur length
    int reste; // aka reste du modulo

    if (nb == 0)
    {
        str[i++] = '0';
        str[i] = '\0';
        return str;
    }

    while (nb != 0)
    {
        reste = nb % 10;
        str[i++] = (reste > 9) ? (reste - 10) + 'a' : reste + '0'; // atoi inversé (pour rappel,c'était res = res * 10 + str[i] + 48 ou un truc du genre)
        nb = nb / 10;
    }

    str[i] = '\0';

    reverse_str(str, i);

    return (str);
}