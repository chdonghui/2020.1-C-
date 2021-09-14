#include <stdio.h>
int main(){
	int a, b;
	printf("두 수를 입력하세요.  ");
	scanf("%d %d", &a, &b);
	printf("%d, %d의 결과= ", a, b);
	printf("%d\n", (a>b)-(a<b));//5, 7  = -1/ 7, 5 = 1 
	return 0; 
}


