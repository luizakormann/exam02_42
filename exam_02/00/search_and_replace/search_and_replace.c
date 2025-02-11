#include <unistd.h>

int main(int argc, char *argv[])
{
    char    *str;
    int     i;

    if (argc != 4)
    {
        write(1, "\n", 1);
        return (0);
    }

    str = argv[1];
    i = 0;
    // preciso revisitar a comparação de strings!
	/*----------------8<-------------[ START TEST
        💻 TEST
./a.out "zaz" "art" "zul"
        🔎 YOUR OUTPUT:
zzz$
        🗝 EXPECTED OUTPUT:
$
----------------8<------------- END TEST ]*/
    if (argv[2][1] != '\0' || argv[3][1] != '\0')
    {
        write(1, "\n", 1);
        return (0);
    }
    while (str[i])
    {
        if (str[i] == argv[2][0])
            str[i] = argv[3][0];
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}

