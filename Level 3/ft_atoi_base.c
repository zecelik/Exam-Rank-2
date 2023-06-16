int		ft_atoi_base(const char *str, int str_base)
{
	int i;
	int n;
	int len;
	int result;

	i = 0;
	n = 1;
	result = 0;
	if (str[i] == '-')
	{
		n = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		result *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			result += str[i] - 48;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			result += str[i] - 55;
		else if (str[i] >= 'a' && str[i] <= 'z')
			result += str[i] - 87;
		i++;
	}
	return (result * n);
}
#include <stdio.h>
int main()
{ 
    const char *str = "101";
    int base = 2;
    int result = ft_atoi_base(str, base);
	printf("%d\n", result);
    return 0;
}