#include <stdio.h>
int main(){
	
	char name[100] = {0,};
	int old = 0;
	
	printf("이름: ");
	scanf("%s", name);
	printf("나이: ");
	scanf("%d", &old);
	
	printf("안녕하세요 %s님 벌써 %d살이 되셨군요!\n", name, old);
	
	return 0;
}
