#include <unistd.h>

void	putnbr(void)
{
	char	dig;

	dig = '0';
	while (dig <= '9')
	{
		write(1, &dig, 1);
		dig++;
	}
}

int main(void)
{
	putnbr();
	return(0);
}
