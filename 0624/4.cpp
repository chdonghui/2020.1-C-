#include <stdio.h>
int main(){
	int a=91, b=7;
	printf("a=%d b=%d\n", a, b);
	if(a%b==0){
		printf("%d: %d의 배수입니다.\n", a, b);
	}
	else{
		printf("%d: %d로 나누어지지 않습니다.\n", a, b);
	}
	return 0;
}
