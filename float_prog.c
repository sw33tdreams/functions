#include <stdio.h>
int main() {
	float float_sum(float, float);
	printf("enter 2 float numbers:  ");
	float a = 0, b = 0;
	scanf("%f",&a);
	scanf("%f", &b);
	printf("sum is %f\n",float_sum(a,b));
	return 0;
}

