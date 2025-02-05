#include <stddef.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    char    *str;
    int     i;
    int     reps;

    if (argc != 2 || argv[1] == NULL)
    {
        write(1, "\n", 1);
        return (0);
    }

    str = argv[1];
    i = 0;
    reps = 1;

    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            reps = str[i] - 64;
            while (reps)
            {
                write(1, &str[i], 1);
                reps--;
            }
			i++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            reps = str[i] - 96;
            while (reps)
            {
                write(1, &str[i], 1);
                reps--;
            }
			i++;
        }
        else
        {
            write(1, &str[i], 1);
            i++;
        }
        }
    write(1, "\n", 1);
    return (0);
}
