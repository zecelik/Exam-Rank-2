#include <unistd.h>
#include <stdlib.h>
int ft_atoi(char *str)
{
	int res = 0;
	int sign = 1;
	while(*str == ' ' || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	if(*str == ' ')
		sign = -1;
	if(*str == '+' || *str == '-')
		str++;
	while(*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return(res * sign);
}
void ft_putnbr(int num)
{
	char str[] = "0123456789";
	if(num > 9)
		ft_putnbr(num / 10);
	write(1, &str[num % 10], 1);
}
int is_prime(int num)
{
	if(num <= 1)
		return(0);
	if(num % 2 == 0 && num > 2)
		return(0);
	if(num % 3 == 0 && num > 3)
		return(0);
	return(1);
}
int main(int argc, char *argv[])
{
	int sum = 0;
	int nb = ft_atoi(argv[1]);
	
	if (argc == 2)
	{
		while (nb > 0)
			if (is_prime(nb--))
				sum += (nb + 1);
		ft_putnbr(sum);
	}
	if (argc != 2)
		ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}