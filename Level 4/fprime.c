#include <stdlib.h>
#include <stdio.h>
int ft_atoi(char *str)
{
    int sign = 1;
    int res = 0;
    while(*str == ' ' || (*str >= 9 && *str <= 13))
    {
        str++;
    }
    if(*str == '-')
        sign = -1;
    if(*str == '-' || *str == '+')
        str++;
    while(*str >= '0' && *str <= '9')
    {
        res = res * 10 + *str - '0';
        str++;
    }
    return(res * sign);
}
int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int i = 1;
        int num = ft_atoi(argv[1]);
        if(num == 1)
            printf("1");
        while(++i <= num)
        {
            if(num % i == 0)
            {
                printf("%d", i);
                if(num == i)
                    break;
                printf("*");
                num /= i;
                i = 1;
            }
        }
    }
    printf("\n");
}