#include <stdio.h>
int main(){
	int a, b;
	printf("�� ���� �Է��ϼ���. ");
	scanf("%d %d", &a, &b);
	if(a%6!=0)printf("%d: 6�� ��� NO\n", a);
	else printf("%d: 6�� ��� YES\n", a);
	if(b%6!=0)printf("%d: 6�� ��� NO\n", b);
	else printf("%d: 6�� ��� YES\n", b);
	return 0;
}
