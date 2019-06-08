#include <stdio.h>

void func1() {
	int a;
	printf("a: 0x%08x\n", a);
}

void func2() {
	int b;
	scanf("%x", &b);
}

int main(int argc, char **argv) {
	func2();
	func1();
}
