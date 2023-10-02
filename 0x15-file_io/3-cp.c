#include "main.h"

#define BUFFER_SIZE 1024

/**
 * create_buffer - Allocates a buffer of size BUFFER_SIZE.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(void)
{
	char *buffer = malloc(BUFFER_SIZE);

	if (buffer == NULL)
	{
		perror("malloc");
		exit(98); }
	return (buffer);
}

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		perror("close");
		exit(100); }
}
/**
 * main - main fun
 * @argc: arg count
 * @argv: arg pass to array
 * Return: res
*/
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
		exit(97); }
	buffer = create_buffer();

	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		perror("open");
		free(buffer);
		exit(98); }
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{
		perror("open");
		free(buffer);
		close_file(from);
		exit(99); }
	while ((r = read(from, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(to, buffer, r);
		if (w == -1)
		{
			perror("write");
			free(buffer);
			close_file(from);
			close_file(to);
			exit(99); }}
	free(buffer);
	close_file(from);
	close_file(to);
	return (0);
}
