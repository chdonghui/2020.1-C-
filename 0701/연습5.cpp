#include <stdio.h>
int main(){
	float a, b, c;
	printf("3개의 실수를 입력하세요. ");
	scanf("%f %f %f", &a, &b, &c);
	if(a>b){
		if(a>c) printf("가장큰수: %.3f\n", a);
		else printf("가장큰수: %.3f\n", c);
	}else{
		if(b>a){
			if(b>c) printf("가장큰수: %.3f\n", b);
			else printf("가장큰수: %.3f\n", c);
		}
	}
}
