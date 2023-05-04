#include "main.h"

/**
 * flip_bits - poqiehguiwqeacjcidxoqfjqwfg.
 * @n: wreoihgweuifqw3eofijh3f.
 * @m: po90suifhsacxjwqiujbceqwgf.
 * Return: oiwqdhjuiwqfiuoqhewiuogioewq.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int myposq, theres;
	unsigned int i, j;

	j = 0;
	theres = 1;
	myposq = n ^ m;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)

	{
		if (theres == (myposq & theres))
			j++;
		theres <<= 1;
	}

	return (j);
}
