/**
 * infinite_add - Adds two numbers.
 * @n1: The first number.
 * @n2: The second number.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 * Return: A pointer to the result (r) or 0 if the result cannot be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, carry = 0, sum, i = 0;
while (n1[len1])
len1++;
while (n2[len2])
len2++;
if (len1 >= size_r || len2 >= size_r)
return (0);
for (; len1 > 0 || len2 > 0 || carry; len1--, len2--, i++)
{
sum = carry + (len1 > 0 ?
n1[len1 - 1] - '0' : 0) + (len2 > 0 ?
n2[len2 - 1] - '0' : 0);
carry = sum / 10;
r[i] = (sum % 10) + '0';
}
if (i >= size_r)
return (0);
r[i] = '\0';
for (int j = 0, k = i - 1; j < k; j++, k--)
{
char tmp = r[j];
r[j] = r[k];
r[k] = tmp;
}
return (r);
}

