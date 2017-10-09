#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	char ch = 1107;
	long lg = 3165343124317;
	long lg1 = pow(2, 32);

	printf("%c\n", ch);
	// 截断就是取余
	printf("%u\n", lg);
	printf("%u\n", lg % lg1);
	return 0;
}