//�̻��� ��� �ذ� 
#include <stdio.h>
int main(){
	
	char c[] = "ABC";
	
	printf("%d\n", c[0]);//%d�� ������ 10���� 
	printf("%d\n", c[1]);//%c�� char(����)�� 
	printf("%d\n", c[2]);
	
	printf("%c\n", c[0]);//%d�� ������ 10���� 
	printf("%c\n", c[1]);//%c�� char(����)�� 
	printf("%c\n", c[2]);
	
	/*
	���: 
		65
		66
		67
	*/
	return 0;
}
