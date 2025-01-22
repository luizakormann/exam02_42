#include <unistd.h>

int main(int argc, char *argv[])
{
    char    *str1;
    char    *str2;
    int     i;
    int     j;

    if (argc != 3)
        write (1, "\n", 1);
    else
    {
        str1 = argv[1];
        str2 = argv[2];
        i = 0;
        j = 0;
        while (str1[i])
        {
            if (str1[i] == str2[j++])
		    write (1, &str1[i], 1);
	    i++;
	}
    }
    return (0);
}
