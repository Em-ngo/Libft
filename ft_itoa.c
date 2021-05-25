#include <stdlib.h>
#include <stdio.h>

int base_len(long nb)
{
    int len;

    len = 0;
    if (nb < 0)
    {
        nb = -nb;
        len++;
    }
    while (nb > 0)
    {
        nb /= 10;
        len++;
    }
    return (len);
}

char *ft_itoa(int nb)
{
    long n;
    int i;
    char *str;

    n = nb;
    i = base_len(n);
    str = (char *)malloc(sizeof(char) * (i + 1));
    if (!str)
        return NULL;
    str[i] = '\0';
    i--;
    if (n == 0)
    {
        str[0] = 48;
        return (str);
    }
    if (n < 0)
    {
        str[0] = '-';
        n = -n;
    }
    while (n > 0)
    {
        str[i] = 48 + (n % 10);
        n /= 10;
        i--;
    }
    return (str);
}

int main(int argc, char **argv)
{
  printf("Main de test : ft_itoa\n");
  printf("Test parametres basiques (Entier positif)\n");
  printf("%s\n\n", ft_itoa(2543));

  printf("(Entier negatif)\n");
  printf("%s\n\n", ft_itoa(-254));

  printf("(Entier = 0)\n");
  printf("%s\n\n", ft_itoa(0));

  return (0);
}
