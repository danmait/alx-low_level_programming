/**
* _strcmp -  compares two strings
* @s1: string 1
* @s2: string 2
* Return: 0 if equal, a positive number if s1 > s2 and -1 if not
*/

int _strcmp(char *s1, char *s2)
{
	while (((*s1 - *s2) == 0) && (*s1 != '\0' || *s2 != '\0'))
	{

		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
