#include <stdio.h>
int main(){
	int money=0;
	printf("�� �ֽ��ϱ�?\n");
	scanf("%d", &money);
	if(money>=7500*2){
		printf("%d���� ���尡�� �մϴ�", money);
	}else{
		money = (7500*2)-money;
		printf("%d���� �����ϱ���.", money);
	}
	return 0;
}
