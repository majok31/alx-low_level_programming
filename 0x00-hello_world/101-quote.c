#include <unistd.h>
#include <string.h>
/**
 * main - main function
 * write - to output the message to standard error
 * Return: return 1 to indicate error
*/
int main(void)
{
char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, message, strlen(message));
return (1);
}

