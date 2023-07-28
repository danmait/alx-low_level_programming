/**
* string_toupper - turns lower case letters to uppercase
* @str: the string
* Return: a pointer to the new string
*/

char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] -= 32;
		i++;
	}
	return (str);
}
