/**
 * @brief Prints the bits of an unsigned char.
 *
 * @param octet The unsigned char whose bits will be printed.
 * @return void
 */
void	print_bits(unsigned char octet)
{
	int		i;
	char	c;

	i = 8;
	while (i--)
	{
		c = octet >> i;
		if (c & 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
}
