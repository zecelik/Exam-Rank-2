#include <stdio.h>
size_t	ft_strcspn(const char *s, const char *reject)
{
    int  i = 0;
    int j = 0;
    while(s[i])
    {
        if(s[i] == reject[j])
        {
            return(i);
        }
        i++;
        j++;
        if(s[i] == '\0')
        {
            return(i);
        }
    }
}
/*
int main()
{
    char a[] = "ehrakkgjj";
    char b[] = "zcli";
    printf("%ld", ft_strcspn(a , b));
}
*/