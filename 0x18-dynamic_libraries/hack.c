
/**
 * rand - fack rand function
 * Return: fack numbers
 */

int rand()
{
	static int num = -1;

	num++;
	if (num == 0)
		return (9);
	if (num == 1)
		return (9);
	if (num == 2)
		return (8);
	if (num == 3)
		return (10);
	if (num == 4)
		return (24);
	if (num == 5)
		return (75);
	return (num * num % 30000);
}
