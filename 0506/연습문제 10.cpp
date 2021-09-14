//이상한 결과 해결 
#include <stdio.h>
int main(){
	
	char c[] = "ABC";
	
	printf("%d\n", c[0]);//%d는 정수형 10진수 
	printf("%d\n", c[1]);//%c는 char(문자)형 
	printf("%d\n", c[2]);
	
	printf("%c\n", c[0]);//%d는 정수형 10진수 
	printf("%c\n", c[1]);//%c는 char(문자)형 
	printf("%c\n", c[2]);
	
	/*
	결과: 
		65
		66
		67
	*/
	return 0;
}
