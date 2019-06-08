#include <stdio.h>

int main(int argc, char **argv)
{
	int c = 70000;
	unsigned short uc = (unsigned short) c;
	printf("c = %d, uc = %d\n", c, uc);
	return 0;
}
