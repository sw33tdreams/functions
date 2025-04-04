#include <stdio.h>
int main() {
	int celsius(int);
	printf("int temp in cel: ");
	int a = 0;
	scanf("%d", &a);
	printf("int temp in fahr is %d\n", celsius(a));
	return 0;
}

