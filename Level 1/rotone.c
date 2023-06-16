#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void rotone(char *str)
{
    while(*str)
    {
    if((*str >= 'a' && *str <= 'y') || (*str >= 'A' && *str <= 'Y'))
      ft_putchar(*str + 1);
    
    else if(*str == 'z' || *str == 'Z')
    ft_putchar(*str - 25);

    else
    ft_putchar(*str);
    str++;
    }
    
}
int main(int argc, char **argv)
{
    
    if(argc == 2)
    rotone(argv[1]);
    ft_putchar('\n');
}