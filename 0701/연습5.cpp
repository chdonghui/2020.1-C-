#include <stdio.h>
int main(){
	float a, b, c;
	printf("3���� �Ǽ��� �Է��ϼ���. ");
	scanf("%f %f %f", &a, &b, &c);
	if(a>b){
		if(a>c) printf("����ū��: %.3f\n", a);
		else printf("����ū��: %.3f\n", c);
	}else{
		if(b>a){
			if(b>c) printf("����ū��: %.3f\n", b);
			else printf("����ū��: %.3f\n", c);
		}
	}
}
