#include <stdio.h>
#include <stdlib.h>
int main(){
	
	char cmd[100] = {0, };
	char q[100] = {0, };
	
	printf("�˻��ϰ� ���� ������ �Է��� �ּ���:\n");
	
	scanf("%s", q);
	
	sprintf(cmd, "start https://maps.google.com/maps\?q=%s", q);
	
	system(cmd);
	
	return 0;
}
