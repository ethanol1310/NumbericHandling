#include <stdio.h>
#include <limits.h>

int main(void)
{
	char c1 = 0xff;
	char c2 = 0;

	unsigned char uc1 = 0xff;
	unsigned char uc2 = 0;

	if(~c1 == c2) {
		printf("%08x == %08x\n", ~c1, c2);
	} else {
		printf("%08x != %08x\n", ~c1, c2);
	}
	if(~uc1 == uc2) {
		printf("%08x == %08x\n", ~uc1, uc2);
	} else {
		printf("%08x != %08x\n", ~uc1, uc2);
	}



  return 0;
}
