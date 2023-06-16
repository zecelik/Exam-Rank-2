#include <unistd.h>
int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int i = 0;
        int flag;
        while(argv[1][i] == ' ' || argv[1][i] == '\t')
        {
            i++;
        }
        while(argv[1][i])
        {
            if(argv[1][i] == ' ' || argv[1][i] == '\t')
                flag = 1;
            if(!(argv[1][i] == ' ' || argv[1][i] == '\t'))
            {
                if(flag)
                    write(1, " ", 1);
                flag = 0;
                write(1, &argv[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
}