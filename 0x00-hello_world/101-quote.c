#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main(void)
{
	const char *message;

message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(STDERR_FILENO, message, strlen(message));
	return (0);
}

