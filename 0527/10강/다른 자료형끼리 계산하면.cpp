#include <stdio.h>
int main(){
	
	int i1 = 3, i2 = 2;
	float f = 2, r = 0;
	
	r= i1/i2;
	printf("int�� int���� ����� float ������ ������ �� %f\n", r);
	r = i1/f;
	printf("int�� float�� �������� float������ ������ �� = %f\n", r);
	
	return 0;
}
