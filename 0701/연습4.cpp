#include <stdio.h>
int main(){
	int a, b, c, min;
	printf("3개의 수를 입력하시오. ");
	scanf("%d %d %d", &a, &b, &c);
	if(a<b){
		if(a<c)
			min=a;
		else
			min=c;
	}else{
		if(c>b)
			min=b;
		else
			min=c;
	}
	printf("가장 작은 수는 %d입니다.\n", min);
	return 0;
} 
