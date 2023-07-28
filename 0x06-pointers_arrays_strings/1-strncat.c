/**
* _strncat - concats nbytes from src to dest
* @dest: destination string
* @src: string to be concated to dest
* @n: number of bytes to concat src
* Return: a pointer to the new string , which is dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int destn;

	destn = 0;

	while (dest[destn] != '\0')
	{
		destn++;
	}

	while (*src != '\0')
	{
		if (n < 1)
			break;

		dest[destn] = *src;
		src++;
		destn++;
		n--;

	}

	dest[destn] = '\0';

	return (dest);
}

