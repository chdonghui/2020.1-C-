#include <stdio.h>
int main(){
	int a, b;
	printf("두 수를 입력하시요.");
	scanf("%d %d", &a, &b);
	if(a>b){
		printf("찾은 큰수: %d\n", a);	
	}else{
		printf("찾은 큰수: %d\n", b);
	}
	return 0;
}
