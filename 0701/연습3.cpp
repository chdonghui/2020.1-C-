#include <stdio.h>
int main(){
	int a;
	printf("������ �Է��ϼ���. ");
	scanf("%d", &a);
	if(a>=80){
		if(a>=90){
			printf("%d���� A���Դϴ�.\n", a);
		}else if(a>=85){
			printf("%d���� B���Դϴ�.\n", a);
		}else{
			printf("%d���� C���Դϴ�.\n", a);
		}
	}else{
		printf("%d���� ���հ��Դϴ�.\n", a);
	}
	return 0;
} 
