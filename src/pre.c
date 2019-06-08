#include <stdio.h>
#include <limits.h>

int main(int argc, char **argv) {
	int maxi = INT_MAX;
	int mini = INT_MIN;

	float f = 10.555;
	float fmaxint = INT_MAX;
	float fminint= INT_MIN;
	
	int intf = (int)f;	
	printf("maxi = INT MAX = %d\n", maxi);
	printf("f = %f \n", f);
	printf("(int)f: %d\n", (int)f);
	printf("(float)(int)f: %f\n", (float)(int)f);
        printf("(float)maxi: %f\n", (float)maxi);
	printf("(int)(float)maxi: %d\n\n", (int)(float)maxi);

	printf("mini = INT MIN = %d\n", mini);
	printf("(float)mini: %f\n", (float)mini);
	printf("(int)(float)mini: %d\n", (int)(float)mini);
	
	return 0;
}
