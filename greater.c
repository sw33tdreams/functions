#include <stdio.h>
int greater(int a, int b){
	int res = 0;
	if(a < b){
		res = b;
	}else if(a >b){
		res = a;
	}else{ 
		printf("they are equal\n");
		return 0;
	}
	return res;
}
