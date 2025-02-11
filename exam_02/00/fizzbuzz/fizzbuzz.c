#include <unistd.h>

int main(void)
{
    int num;
    char    *fizz;
    char    *buzz;
    int     i;
    int     n;
    int     r;

    num = 1;
    fizz = "fizz";
    buzz = "buzz";
    i = 0;
    n = num;
    r = 0;
    while (num < 101)
    {
        if (num % 3 == 0 && num % 5 == 0)
        {
            while (fizz[i])
            {
                write (1, &fizz[i], 1);
                i++;
            }
            i = 0;
            while (buzz[i])
            {
                write (1, &buzz[i], 1);
                i++;
            }
            i = 0;
            write (1, "\n", 1);
        }
        else if (num % 3 == 0 && num % 5 != 0)
        {
            while (fizz[i])
            {
                write (1, &fizz[i], 1);
                i++;
            }
            i = 0;
            write (1, "\n", 1);
        }
        else if (num % 5 == 0 && num % 3 != 0)
        {
            while (buzz[i])
            {
                write (1, &buzz[i], 1);
                i++;
            }
            i = 0;
            write (1, "\n", 1);
        }
        else
        {
            if (n >= 10)
            {
                r = (n % 10) + '0';
                n = (n / 10) + '0';
                write (1, &n, 1);
                write (1, &r, 1);
            }
            else
            {
                n += '0';
                write (1, &n, 1);
            }
            write (1, "\n", 1);
        }
        num++;
        n = num;
    }
    return (0);
}
