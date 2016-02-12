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

int i, max=0, min=0;
for(i=1;i<=5;i++){
	printf("Enter Number #%d: ", i);
	scanf("%d", &x);
	if(x>max)
	max = x;
	if(x<min || i==1)
	min = x;

}

printf("Max = %d, Min = %d\n", max, min);


int main() {
	int x=2, y=3;
	printf("%i\n\n", addition(x,y));
	printf("%i\n\n", subtraction(x,y));
	printf("%i\n\n", multiplication(x,y));
	printf("%f\n", division(x,y));
	printf("%f\n", remainder(x,y));
	return 0;
}
