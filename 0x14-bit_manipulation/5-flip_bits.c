/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: a number
 * @m: another number
 * Return: the number of bits you would need
 * to flip to get from @n to @m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int result = 0, i = 0;
	unsigned int limit = (sizeof(unsigned long int) * 8) - 1;

	if (n == m)
		return (result);

	while (i <= limit)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			result++;

		i++;
	}

	return (result);
}
