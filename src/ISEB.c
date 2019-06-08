#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUF_SIZE 10

int main(int argc, char **argv) {
	int len;
	char buf[10];
	scanf("%d", &len);
	if(len > strlen(argv[1]))
		memcpy(buf, argv[1], len);
	return 0;
}
