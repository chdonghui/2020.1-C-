#include <stdio.h>
int main(){
	
	int i1 = 3, i2 = 2;
	float r = 0;
	
	r= i1/i2;
	printf("int와 int연산 결과를 float 변수에 저장할 때 %f\n", r);
	r = (float)i1 / i2;
	printf("int와 하나를 형변환한 뒤 연산한 결과 = %f\n", r);
	
	return 0;
}
