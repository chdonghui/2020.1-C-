#include <stdio.h>
int main(){
	int a;
	printf("������ �Է��ϼ���. ");
	scanf("%d", &a);
	if(a>=90){
		if(a>=95)
			printf("����� ��ǰ ���� ����Դϴ�.\n");
		else
			printf("���� ���� ����Դϴ�.\n");
	}
	return 0;
}
