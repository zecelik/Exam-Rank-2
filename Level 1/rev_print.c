#include <unistd.h>
int main(int argc, char **argv)
{
	int i = 0;
	if(argc == 2)
	{
		while(argv[1][i])
		{
         	i++;
		}
		while(i)
		{
			i--;
			write(1, &argv[1][i], 1);
		}
	}
}