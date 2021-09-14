#include <stdio.h>
int main(){
	
	int i1 = 3, i2 = 2;
	float f = 2, r = 0;
	
	r= i1/i2;
	printf("int와 int연산 결과를 float 변수에 저장할 때 %f\n", r);
	r = i1/f;
	printf("int와 float의 연산결과를 float변수에 저장할 때 = %f\n", r);
	
	return 0;
}
