#include <stdio.h>
int main(){
	char str[3][100] = {0, };
	
	printf("���� �߿��� ���� �����ΰ�? ");
	scanf("%[^\n]", str[0]);
	getchar();
	printf("���� �ʿ��� ����� �����ΰ�? ");
	scanf("%[^\n]", str[1]);
	getchar();
	printf("���� �߿��� ���� �����ΰ�? ");
	scanf("%[^\n]", str[2]);
	
	printf("\n\n���� �߿��� ���� %s �̰�\n", str[0]);
	printf("���� �ʿ��� ����� %s ,�׸���\n", str[1]);
	printf("���� �߿��� ���� %s �ϴ� �� �̴�.\n", str[2]);
	
	return 0;
}
