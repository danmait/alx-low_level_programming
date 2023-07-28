/**
* _strncpy - copes nbytes of src to dest
* @dest: destination string
* @src: source string
* @n: bytes to copy
* Return: a pointer to dest string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
