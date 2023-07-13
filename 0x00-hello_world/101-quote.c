#include <unistd.h>

int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, "
                     "2015-10-19\n";

	write(STDOUT_FILENO, message, 59);
	return (1);
}
