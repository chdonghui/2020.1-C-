//������ �ȳ��� ���������� �۵��� ���ϴ� �ڵ� ���� 
#include <stdio.h>
int main(){
	
	char c[4] = {'a', 'b', 'c', 'd'};
	
	printf("%c%c%c%c", c[1], c[2], c[3], c[4]);//index�� 0���� �����̱� ������ c[0]='a'��.
	
 	printf("\n�ٲ� ��: ");
 	printf("%c%c%c%c", c[0], c[1], c[2], c[3]);
	
	/*
	���: abcd 
	*/
	return 0;
}
