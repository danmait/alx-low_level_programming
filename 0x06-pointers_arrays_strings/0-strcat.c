/**
* _strcat - concats two strings together
* @dest: destination string
* @src: string to be concated to dest
* Return: a pointer to the new string , which is dest
*/

char *_strcat(char *dest, char *src)
{
	int destn;

	destn = 0;

	while (dest[destn] != '\0')
	{
		destn++;
	}

	while (*src != '\0')
	{
		dest[destn] = *src;
		src++;
		destn++;

	}

	dest[destn] = '\0';

	return (dest);
}
