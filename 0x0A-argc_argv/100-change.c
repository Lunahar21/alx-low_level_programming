#include <stdio.h>
#include <stdlib.h>

/**
 * min_coins - Calculates the minimum number of coins to make change
 * @cents: The amount of cents
 * @coins: The array of coin values
 *
 * Return: The minimum number of coins used
 */
int min_coins(int cents, int coins[])
{
	int i, coins_used = 0;

	while (cents > 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (cents >= coins[i])
			{
				cents -= coins[i];
				coins_used++;
				break;
			}
		}
	}

	return (coins_used);
}

/**
 * main - Prints the minimum number of coins to make change
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: 0 if successful, 1 if error

