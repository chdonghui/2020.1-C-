#include <stdio.h>
#include <stdlib.h> 
int main(){
	
	int time = 0;
	char cmd[100] = {0,};
	
	printf("컴퓨터 예약 종료시간을 입력해주세요(단위=초): ");
	scanf("%d", &time);
	sprintf(cmd, "start shutdown -s -t %d", time);
	system(cmd);
	
	return 0;
}

