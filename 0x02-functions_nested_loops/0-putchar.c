#include "_putchar"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	char _putchar[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(_putchar[i]);
	}
	_putchar('\n');
	return (0);
}

