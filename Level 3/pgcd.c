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
#include <stdio.h>
int main(int argc, char **argv)
{
    if(argc != 3)
    {
        printf("\n");
    }
    if(argc == 3)
    {
        int num1 = ft_atoi(argv[1]);
        int num2 = ft_atoi(argv[2]);
        if(num1 > 0 && num2 > 0)
        {
            while(num1 != num2)
            {
                if(num1 > num2)
                    num1 -= num2;
                else if(num1 < num2)
                    num2 -= num1;
            }
            printf("%d", num1);    
        }
    }
    printf("\n");
}
