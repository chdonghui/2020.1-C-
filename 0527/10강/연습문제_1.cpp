#include <stdio.h>
int main(){
	
	int i1 = 3, i2 = 2;
	float r = 0;
	
	r= (float)i1/i2;
	printf("%d 나누기 %d = %.2f\n", i1, i2, r);
	r = i1 / i2;
	printf("%d 나누기 %d = %.2f\n", i1, i2, r);
	
	return 0;
}
