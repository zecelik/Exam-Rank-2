#include <unistd.h>
int chehck(char c, char *str, int len)
{
    int i = 0;
    while(i < len)
    {
        if(str[i] == c)
            return(0);
        i++;
    }
    return(1);
}
int main(int argc, char **argv)
{
    if(argc == 3)
    {
        int i = 0;
        int j = 0;
        int k = 0;
        while(argv[1][i])
        {
            i++;
        }
        while(argv[2][j])
        {
            argv[1][i] = argv[2][j];
            j++;
            i++;
        }
        while(k <= i)
        {
            if(chehck(argv[1][k], argv[1], k) == 1)
                write(1, &argv[1][k], 1);
            k++;
        }
    }
    write(1, "\n", 1);
}