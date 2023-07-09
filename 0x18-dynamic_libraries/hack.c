
/**
 * rand - fack rand function
 * Return: fack numbers
 */

int rand()
{
	static int num = -1;

	num++;
	if (num == 0)
		return (7);
	if (num == 1)
		return (7);
	if (num == 2)
		return (6);
	if (num == 3)
		return (8);
	if (num == 4)
		return (22);
	if (num == 5)
		return (73);
	return (num * num % 30000);
}
