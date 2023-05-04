#include "main.h"

unsigned long int _msajjwpow(unsigned int myprobase, unsigned int popwer);

/**
 * print_binary - qwdwerhntyrfjmkterrefascsdg.
 * @n: qwfedrtfgjrtytsdefqwef.
 * Return: Just Noothing.
 */

void print_binary(unsigned long int n)
{
	unsigned long int dev, result;
	char flag;

	flag = 0;

	dev = _msajjwpow(2, sizeof(unsigned long int) * 8 - 1);

	while (dev != 0)

	{
		result = n & dev;
		if (result == dev)

		{
			flag = 1;
			_putchar('1');

		}

		else if (flag == 1 || dev == 1)

		{
			_putchar('0');
		}

		dev >>= 1;
	}
}

/**
 * _msajjwpow - trejhwsdfwegrtfjrtyjt.
 * @myprobase: wegedtrhjnrtfdsfqawefwe.
 * @popwer: oiqdjiowqojfgweijg.
 * Return: wpeogjiuoerwgiojwiojf.
 */

unsigned long int _msajjwpow(unsigned int myprobase, unsigned int popwer)
{
	unsigned long int num;
	unsigned int i;

	num = 1;

	for (i = 1; i <= popwer; i++)

	{
		num *= myprobase;
	}

	return (num);
}
