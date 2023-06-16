#include <unistd.h>
int ft_putnbr(int num)
{
	char str[] = "0123456789";
	if(num > 9)
		ft_putnbr(num / 10);
	write(1, &str[num % 10], 1);
}
int main(int num)
{
	num = 1;
	while(num <= 100)
	{
		if(num % 3 == 0)
			write(1, "fizz", 4);
		else if(num % 5 == 0)
			write(1, "buzz", 4);
		else if(num % 15 == 0)
			write(1, "fizzbuzz", 8);
		else
			ft_putnbr(num);
		num++;
		write(1, "\n", 1);
    }
}
