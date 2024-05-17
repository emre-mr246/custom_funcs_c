/**
 * @brief Checks if a given number is prime using optimized trial division.
 * 
 * @param nbr The number to be checked.
 * @return 1 if prime, 0 if not.
 *
 * This function efficiently checks for prime numbers by skipping unnecessary
 * divisors. It starts checking potential divisors from 5, and then increments
 * by 6 in each iteration (5 + 1) - 1, effectively skipping multiples of 2 and 3,
 * which are already checked earlier. If a divisor is found, the number is not prime
 * and the function returns 0; otherwise, it returns 1 indicating primality.
 */
int is_prime(int nbr)
{
	int i;

	i = 0;
    if (nbr <= 1)
        return (0);
    if (nbr <= 3)
        return (1);
    if ((nbr % 2 == 0) || (nbr % 3 == 0))
        return (0);
	i = 5;
    while (i * i <= nbr) 
	{
        if ((nbr % i == 0) || (nbr % (i + 2) == 0))
            return (0);
		i += 6;
    }
    return (1);
}
