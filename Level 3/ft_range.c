#include <stdlib.h>
int ft_abs(int num)
{
    if(num < 0)
        return(-num);
    else
        return(num);
}
int     *ft_range(int start, int end)
{
    int len = ft_abs((end - start)) + 1;
    int *res;
    int i = 0;
    res = (int*)malloc(sizeof(int) * len);
    while(i < len)
    {
        if(start < end)
        {
            res[i] = start;
            start++;
            i++;
        }
        else
        {
            res[i] = start;
            start--;
            i++;
        }
    }
    return(res);
}
/*
    #include <stdio.h>
    int main()
    {
        int *res = ft_range(2 , 5);
        int i = 0;
        while(i < 4)
        {
            printf("%d", res[i]);
            i++;
        }
        free(res);
    }
*/