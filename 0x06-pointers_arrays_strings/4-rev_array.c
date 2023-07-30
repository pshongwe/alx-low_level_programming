/**
 * reverse_array - reverse int array order
 * @a: int array
 * @n: length of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp;
	int start;
	int end;

	start = 0;
	end = n - 1;
	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
