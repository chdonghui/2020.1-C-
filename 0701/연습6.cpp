#include <stdio.h>
int main(){
	int a;
	printf("������ ���� �Է��ϼ���..");
	scanf("%d", &a);
	if(a%3==0 && a%4==0){
		printf("%d => 12�� ����̴�.\n", a);
	}else{
		printf("%d => 12�� ����� �ƴϴ�.\n", a);
	}
	return 0;
}
