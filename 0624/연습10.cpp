#include <stdio.h>
int main(){
	int money=0;
	printf("얼마 있습니까?\n");
	scanf("%d", &money);
	if(money>=7500*2){
		printf("%d원은 입장가능 합니다", money);
	}else{
		money = (7500*2)-money;
		printf("%d원이 부족하군요.", money);
	}
	return 0;
}
