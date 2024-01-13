#include <stdio.h>
#include <string.h>

int main(void)
{
	size_t len;
	char hello[] = "Hello";

	len = strlen(hello);
	printf("%s:%ld \n", hello, len);

	return 0;
}