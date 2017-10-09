#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n = 0;
	/*
	while (n < 21)
	{
		printf("%10d %10d\n", n, n * n++);
	}*/

	int y;
	y = (4 + n++) + (n++);
	printf("y = %d, n = %d \n", y, n);
	return 0;
}