#include <stdio.h>
int main(){
	int greater(int, int);
	int a = 0, b = 0;
	printf("enter 2 ints:  ");
	scanf("%d %d",&a, &b);
	int res  = greater(a, b);
	printf("%d\n",res);
	return 0;
}
