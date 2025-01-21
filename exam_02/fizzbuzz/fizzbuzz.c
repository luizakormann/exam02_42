#include <unistd.h>

int main(void)
{
    int num;
    char    *fizz;
    char    *buzz;

    num = 1;
    fizz = "fizz";
    buzz = "buzz";
    while (num < 101)
    {
        if (num % 3 == 0 && num % 5 == 0)
        {
            write (1, &fizz, sizeof(fizz));
            write (1, &buzz, sizeof(buzz));
        }
        else if (num % 3 == 0 && num % 5 != 0)
            write (1, &fizz, sizeof(fizz));
        else if (num % 5 == 0 && num % 3 != 0)
            write (1, &buzz, sizeof(buzz));
        else
            write (1, &num, sizeof(num));
        num++;
    }
    return (0);
}
