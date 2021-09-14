#include <stdio.h>
int main(){
	int a=3, b=2, c=1;
	printf("%d\n", a>b>c); //0
	printf("%d\n", a>b==b); //0
	printf("%d\n", b<c==a); //0
	printf("%d\n", a<b>=c); //0
	printf("%d\n", b>c!=a); //1
	return 0; 
}


