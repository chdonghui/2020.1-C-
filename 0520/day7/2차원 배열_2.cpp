#include <stdio.h>
int main(){
	char str[3][100] = {0, };
	
	printf("가장 중요한 때는 언제인가? ");
	scanf("%s", str[0]);
	printf("가장 필요한 사람은 누구인가? ");
	scanf("%s", str[1]);
	printf("가장 중요한 일은 무엇인가? ");
	scanf("%s", str[2]);
	
	printf("\n\n가장 중요한 때는 %s 이고\n", str[0]);
	printf("가장 필요한 사람은%s ,그리고\n", str[1]);
	printf("가장 중요한 일은 %s 하는 것 이다.\n", str[2]);
	
	return 0;
}
