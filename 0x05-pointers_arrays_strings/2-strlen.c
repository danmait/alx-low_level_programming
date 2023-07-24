/**
* _strlen - returns length of tring
* @s: string to count length
* Return: length of string s
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
