#include <stdio.h>
int main(){
	int r = 0;
	int c = printf("InputNumber:");
	int d = scanf("%d", &r);
	printf("printf의 리턴값: %d\nscanf의 리턴값: %d\n", c, d);
	
	return 0;
}
