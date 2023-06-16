#include <unistd.h>
int ft_putnbr(int num)
{
    char str[] = "0123456789";
    if(num > 9)
        ft_putnbr(num / 10);
    write(1, &str[num % 10], 1);
}
int main(int argc, char **argv)
{
    (void) argv;
    if(argc)
    {
        ft_putnbr(argc - 1);
    }
}