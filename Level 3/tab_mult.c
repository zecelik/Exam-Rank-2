#include <unistd.h>
#include <stdlib.h>
int	ft_atoi(char *str)
{
	int result = 0;
	int sign = 1;
	while(*str == ' ' || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	if(*str == '-')
		sign = -1;
	else if(*str == '-' || *str == '+')
		str++;
	while(*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return(result * sign);
}
void ft_putnbr(int num)
{
	char str[] = "0123456789";
	if(num > 9)
		ft_putnbr(num / 10);
	write(1, &str[num % 10], 1);
}
int main(int argc, char **argv)
{
	int i = 1;
	int num = ft_atoi(argv[1]);
	if(argc == 2)
	{
		while(i < 10)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(num);
			write(1, " = ", 3);
			ft_putnbr(i * num);
			write(1, "\n", 1);
		   i++;
		}
	}
}
