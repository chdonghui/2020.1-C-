//에러도 안나고 정상적으로 작동도 안하는 코드 수정 
#include <stdio.h>
int main(){
	
	char c[4] = {'a', 'b', 'c', 'd'};
	
	printf("%c%c%c%c", c[1], c[2], c[3], c[4]);//index가 0부터 시작이기 때문에 c[0]='a'다.
	
 	printf("\n바꾼 값: ");
 	printf("%c%c%c%c", c[0], c[1], c[2], c[3]);
	
	/*
	결과: abcd 
	*/
	return 0;
}
