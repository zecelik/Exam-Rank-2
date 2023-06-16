int		max(int* tab, unsigned int len)
{
	int res;
	int i = 0;
	res = tab[i];
	while(i < len)
	{
		if(res < tab[i])
			res = tab[i];
		i++;
	}
	return(res);
}
/*
#include <stdio.h>
int main()
{
	int a[] = {-1,-2,-9};
	int i = 0;

	int maxx = max(a, 3);
	printf("%d", maxx);

}
*/