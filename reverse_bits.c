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
