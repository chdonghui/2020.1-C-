#include <stdio.h>
int main(){
	int a;
	printf("������ ���� �Է��ϼ���. ");
	scanf("%d", &a);
	if(a%3==0)
			printf("%d: 3�� ����Դϴ�.\n", a);
	else if(a%5==0)
			printf("%d: 3�� ���������� �ʴ� 5�� ����Դϴ�.\n", a);
	return 0;
}
