//This is the line causing issue in the conflict branch
#include <stdio.h>

int addition(int x, int y) {
	return x+y;
}

int subtraction(int x, int y) {
	return x-y;
}

int multiplication(int x, int y) {
	return x*y;
}

float division(int x, int y) {
	return x/y;
}

int remainder(int x, int y) {
	return x%y;
}

int min (int x, int y)
{
	if (x>y)
	return x;
}

int main() {
	int x=2, y=3;
	printf("%i\n\n", addition(x,y));
	printf("%i\n\n", subtraction(x,y));
	printf("%i\n\n", multiplication(x,y));
	printf("%f\n", division(x,y));
	return 0;
}
