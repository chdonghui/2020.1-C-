#include <stdio.h>
int main(){
	int a;
	printf("������ ���� �Է��ϼ���. ");
	scanf("%d", &a);
	if(a%4!=0) printf("%d: 4�� ��� NO\n", a);
	else printf("%d: 4�� ��� YES\n", a); 
	return 0;
}
