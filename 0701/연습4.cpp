#include <stdio.h>
int main(){
	int a, b, c, min;
	printf("3���� ���� �Է��Ͻÿ�. ");
	scanf("%d %d %d", &a, &b, &c);
	if(a<b){
		if(a<c)
			min=a;
		else
			min=c;
	}else{
		if(c>b)
			min=b;
		else
			min=c;
	}
	printf("���� ���� ���� %d�Դϴ�.\n", min);
	return 0;
} 
