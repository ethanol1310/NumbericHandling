#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
	int i;
	for(i = 0; i < len; i++)
	{
		printf(" %.2x", start[i]);
	}
	printf("\n");
}


int main(int argc, char **argv) {
	short s = -12345;
	unsigned short us = (unsigned short) s;
	int x = s;
	unsigned ux = us;
	printf("s   = %d:\t", s);
	show_bytes((byte_pointer) &s, sizeof(short));
	printf("us  = %d:\t", us);
	show_bytes((byte_pointer) &us, sizeof(unsigned short));
	printf("x   = %d:\t", x);
	show_bytes((byte_pointer) &x, sizeof(int));
	printf("ux  = %d:\t", ux);
	show_bytes((byte_pointer) &ux, sizeof(unsigned)); 
	return 0;
}
