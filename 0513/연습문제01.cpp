#include <stdio.h>
#include <stdlib.h>
int main(){
	char cmd[2] = {'p', 'r'};
	char str[100] = {0, };
	int mode;
	
	printf("컴퓨터 예약 종료모드를 선택해 주세요.\n");
	printf("1. 바로종료\n");
	printf("2. 재부팅\n");
	printf("[번호입력]:");
	
	scanf("%d", &mode);
	sprintf(str, "shutdown -%c", cmd[mode-1]);
	system(str);
	return 0;
}
