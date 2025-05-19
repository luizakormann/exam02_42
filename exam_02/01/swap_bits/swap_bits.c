
#include <unistd.h>

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

void	print_bits(unsigned char octet)
{
	int	i;
	unsigned char	bit;

	i = 8;
	while (i--)
	{
		bit = (octet >> i & 1);
		bit += '0';
		write(1, &bit, 1);
	}
}

int	main(void)
{
	unsigned char byte;

	byte = 2;
	print_bits(byte);
	byte = swap_bits(byte);
	write (1, "\n", 1);
	print_bits(byte);
	return (0);
}
