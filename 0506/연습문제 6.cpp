//이 코드를 컴파일해서 나온 결과가 무슨 의미일까? 
#include <stdio.h>
int main(){
	
	int a=2, b=0;
	
	b = a == 2;
	printf("%d\n", b); //1 (참)
	
	b = a == 1;
	printf("%d\n", b); //0 (거짓) 
	/*
	결과:
		1
		0 
	*/
	return 0;
}
