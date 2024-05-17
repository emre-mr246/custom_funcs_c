/**
 * @brief Reverses the bits of an unsigned char.
 *
 * @param octet The unsigned char to reverse the bits of.
 * @return The unsigned char with its bits reversed.
 */
unsigned char	reverse_bits(unsigned char octet)
{
	int		i;
	char	c;

	i = 8;
	while (i--)
	{
		c = (c << 1) | (octet & 1);
		octet >>= 1;
	}
	return (c);
}
