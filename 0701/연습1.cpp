#include <stdio.h>
int main(){
	int a;
	printf("점수를 입력하세요. ");
	scanf("%d", &a);
	if(a>=90){
		if(a>=95)
			printf("상장과 상품 수여 대상입니다.\n");
		else
			printf("상장 수여 대상입니다.\n");
	}
	return 0;
}
