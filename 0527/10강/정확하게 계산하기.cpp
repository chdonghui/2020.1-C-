#include <stdio.h>
int main(){
	
	int i1 = 3, i2 = 2;
	float r = 0;
	
	r= i1/i2;
	printf("int�� int���� ����� float ������ ������ �� %f\n", r);
	r = (float)i1 / i2;
	printf("int�� �ϳ��� ����ȯ�� �� ������ ��� = %f\n", r);
	
	return 0;
}
