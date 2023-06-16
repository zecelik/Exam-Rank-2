int	    is_power_of_2(unsigned int n)
{
    int num = 1;
    while(num <= n)
    {
        if(num == n)
            return(1);
        num = num * 2;
    }
    if(num > n)
        return(0);
}
/*
#include <stdio.h>
int main()
{
    printf("%d", is_power_of_2(1));
}
*/