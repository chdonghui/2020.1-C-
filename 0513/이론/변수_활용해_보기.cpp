#include <stdio.h>
int main(){
	
	char name[100] = {0,};
	int old = 0;
	
	printf("�̸�: ");
	scanf("%s", name);
	printf("����: ");
	scanf("%d", &old);
	
	printf("�ȳ��ϼ��� %s�� ���� %d���� �Ǽ̱���!\n", name, old);
	
	return 0;
}
