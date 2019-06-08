#include <stdio.h>
#include <limits.h>



int main(int argc, char **argv)
{
	int max = INT_MAX;
	int min = INT_MIN;
	
	printf("INT MAX = %d\n", max);
	printf("INT MIN = %d\n", min);

	printf("INTEGER OVERFLOW...\n");
	max += 1;
	printf("INT MAX + 1 = %d\n", max);
	min -= 1;
	printf("INT MIN - 1 = %d\n", min);
	return 0;
}

int io_func(int a[], unsigned size) {
	int result = 0;
	
	// size = 0 -> overflow
	for(int i = 0; i<= size - 1; i++)
		result += a[i];
	return result;
}
