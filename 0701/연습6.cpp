#include <stdio.h>
int main(){
	int a;
	printf("임의의 수를 입력하세요..");
	scanf("%d", &a);
	if(a%3==0 && a%4==0){
		printf("%d => 12의 배수이다.\n", a);
	}else{
		printf("%d => 12의 배수가 아니다.\n", a);
	}
	return 0;
}
