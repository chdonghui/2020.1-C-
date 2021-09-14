#include <stdio.h>
int main(){
	int a;
	printf("점수를 입력하세요. ");
	scanf("%d", &a);
	if(a>=80){
		if(a>=90){
			printf("%d점은 A반입니다.\n", a);
		}else if(a>=85){
			printf("%d점은 B반입니다.\n", a);
		}else{
			printf("%d점은 C반입니다.\n", a);
		}
	}else{
		printf("%d점은 불합격입니다.\n", a);
	}
	return 0;
} 
