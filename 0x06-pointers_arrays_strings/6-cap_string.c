/**
* cap_string - capitalizes all words of a string
* @str: the string
* Return: the new string
*/

char *cap_string(char *str)
{
	int i, caps;

	i = 0;
	caps = 0;

	while (str[i] != '\0')
	{
		if (caps == 1)
		{
			caps = 0;

			if (str[i] > 96 && str[i] < 123)
				str[i] -= 32;
		}

		if (str[i] == ' ' ||  str[i] == '\t' ||
		str[i] == '\n' || str[i] == ',' || str[i] == ';' ||
		str[i] == '.' || str[i] == '!' || str[i] == '?' ||
		str[i] == '"' || str[i] == '(' || str[i] == ')' ||
		str[i] == '{' || str[i] == '}')
			caps = 1;

		i++;
	}
	return (str);
}
