#include <unistd.h>
#include <stdlib.h>
int ft_atoi(char *str)
{
	int res = 0;
	int sign = 1;
	while(*str == ' ' && (*str >= 9 && *str <= 13))
	{
		str++;
	}
	if(*str == '-')
		sign = -1;
	else if(*str == '-' || *str == '+')
		str++;
	while(*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return(sign * res);
}
int ft_putnbr(int num)
{
	char str[] = "0123456789abcdef";
	if(num > 16)
		ft_putnbr(num / 16);
	write(1, &str[num % 16], 1);
}
int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int num = ft_atoi(argv[1]);
		ft_putnbr(num);
	}
	else(argc != 2);
		write(1, "\n", 1);
}