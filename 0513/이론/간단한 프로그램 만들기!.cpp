#include <stdio.h>
#include <stdlib.h> 
int main(){
	
	int time = 0;
	char cmd[100] = {0,};
	
	printf("��ǻ�� ���� ����ð��� �Է����ּ���(����=��): ");
	scanf("%d", &time);
	sprintf(cmd, "start shutdown -s -t %d", time);
	system(cmd);
	
	return 0;
}

