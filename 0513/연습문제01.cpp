#include <stdio.h>
#include <stdlib.h>
int main(){
	char cmd[2] = {'p', 'r'};
	char str[100] = {0, };
	int mode;
	
	printf("��ǻ�� ���� �����带 ������ �ּ���.\n");
	printf("1. �ٷ�����\n");
	printf("2. �����\n");
	printf("[��ȣ�Է�]:");
	
	scanf("%d", &mode);
	sprintf(str, "shutdown -%c", cmd[mode-1]);
	system(str);
	return 0;
}
