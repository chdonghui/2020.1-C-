#include <stdio.h>
int main(){
	int a;
	printf("임의의 수를 입력하세요. ");
	scanf("%d", &a);
	if(a%3==0)
			printf("%d: 3의 배수입니다.\n", a);
	else if(a%5==0)
			printf("%d: 3로 나누어지지 않는 5의 배수입니다.\n", a);
	return 0;
}
