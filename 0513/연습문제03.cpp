#include <stdio.h>
#include <stdlib.h>
int main(){
	
	char cmd[100] = {0, };
	char q[100] = {0, };
	
	printf("검색하고 싶은 지역을 입력해 주세요:\n");
	
	scanf("%s", q);
	
	sprintf(cmd, "start https://maps.google.com/maps\?q=%s", q);
	
	system(cmd);
	
	return 0;
}
