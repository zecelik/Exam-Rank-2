int    ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    int  j = 0;
    while(s1[j] && s2[i])
    {
        if(s1[j] == s2[i])
        {
            i++;
            j++;
            return(s1[j] - s2[i]);
        }
        i++;
        j++;
    }
}
/*#include <stdio.h>
int main()
{
    char a[] = "zehra";
    char b[] = "zahaa";
    printf("%d", ft_strcmp(a , b));
}
*/