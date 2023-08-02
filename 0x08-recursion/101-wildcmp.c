/**
* wildcmp - compares two strings and returns 1 if they can be considered
* identical, otherwise returns 0.
* @s1: the first string
* @s2: the second string containing the special character *
*
* Return: 1 if the strings are considered identical, 0 otherwise
*/
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0')
{
if (*s2 == '\0')
return (1);
if (*s2 == '*')
return (wildcmp(s1, s2 + 1));
return (0);
}

if (*s2 == '*')
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));

return (0);
}
