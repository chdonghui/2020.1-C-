#include <stdio.h>
int main(){
	int a;
	printf("������ �Է��ϼ���. ");
	scanf("%d", &a);
	if(a>=60){
		if(a==100)
			printf("�Ϳ�~ �����Դϴ�.\n");
		else
			printf("�Ϳ�~ �Ǹ��մϴ�.\n"); 
	}
	else
		printf("���� �� ����ϼ���.\n");
	return 0;
}
