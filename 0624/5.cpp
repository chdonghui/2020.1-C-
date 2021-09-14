#include <stdio.h>
int main(){
	int a;
	printf("임의의 수를 입력하세요. ");
	scanf("%d", &a);
	if(a%5==0){
		printf("%d: 15의 배수입니다.\n", a);
	}
	return 0;
}
