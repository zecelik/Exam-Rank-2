#include <unistd.h>
int main(int argc, char **argv)
{
    if(argc == 3)
    {
        int i = 0;
        int j = 0;
        while(argv[2][j])
        {
            if(argv[2][j] == argv[1][i])
                i++;
            j++;
        }
        if(argv[1][i] == '\0')
            write(1, "1", 1);
        else
            write(1, "0", 1);
    }
    write(1, "\n", 1);
}