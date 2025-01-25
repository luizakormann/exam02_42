#include <unistd.h>

int main(int argc, char *argv[])
{
    char    *str;
    int     i;
    int     count;

    if (argc != 2 || argv[1] == NULL)
    {
        write (1, "\n", 1);
        return (0);
    }
    str = argv[1];
    i = 0;
    count = 0;
    while (str[i])
    {
        while (count < 13)
        {
            if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            {
                if ((str[i] + 1 >= '[' && str[i] + 1 <= '`') || str[i] + 1 >= '{')
                    str[i] -= 26;
                str[i] += 1;
            }
            count++;
        }
        write (1, &str[i], 1);
        i++;
        count = 0;
    }
    write (1, "\n", 1);
    return (0);
}
