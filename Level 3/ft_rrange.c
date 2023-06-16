#include <stdlib.h>
int ft_abs(int num)
{
    if(num < 0)
        return(-num);
    else
        return(num);
}
int     *ft_rrange(int start, int end)
{
    int *res;
    int len = ft_abs((end - start)) + 1;
    int i = 0;
    res = (int*)malloc(sizeof(int) * len);
    while(i < len)
    {
        if(start < end)
        {
            res[i] = end;
            end--;
            i++;
        }
        else
        {
            res[i] = end;
            end++;
            i++;
        }
    }
    return(res);
}
/*
#include <stdio.h>
int main()
{
    int *res = ft_rrange(1 , 3);
    int i = 0;
    while(i < 3)
    {
        printf(" %d ", res[i]);
        i++;
    }
    free(res);
}
*/