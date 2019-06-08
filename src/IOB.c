#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv){

	char str1[20];
	char str2[100];
	
	fgets(str1, 20, stdin);
	fgets(str2, 100, stdin);
	char *pos;
	if ((pos = strchr(str1, '\n')) != NULL)
    		*pos = '\0';
	if ((pos = strchr(str2, '\n')) != NULL)
		*pos = '\0';
	if(strlen(str1) - strlen(str2) > 0) {
		puts(str1);
		printf("n = %lu\n", strlen(str1) - strlen(str2) - 1);
		strncat(str1, str2, strlen(str1) - strlen(str2) - 1);
		puts(str1);
	}
	return 0;
}
