#include <stdio.h>
#include <stdlib.h>
int main(){
	char cmd[100] = {0, };
	char q[100] = {0, };
	
	printf("검색하고 싶은 동영상 제목을 입력해주세요\n");
	
	scanf("%s", &q);
	 
	sprintf(cmd, "start http://www.youtube.com/results/?search_query=%s", q);
	system(cmd);
	
	return 0;
}
