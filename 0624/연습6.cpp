#include <stdio.h>
int main(){
	int a;
	printf("당신의 나이는? \n");
	scanf("%d", &a);
	if(a>=19) 
		printf("당신은 성인입니다.");
	return 0;
}
