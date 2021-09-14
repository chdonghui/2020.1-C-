#include <stdio.h>
int main(){
	int a;
	printf("점수를 입력하세요. ");
	scanf("%d", &a);
	if(a>=60){
		if(a==100)
			printf("와우~ 만점입니다.\n");
		else
			printf("와우~ 훌륭합니다.\n"); 
	}
	else
		printf("조금 더 노력하세요.\n");
	return 0;
}
