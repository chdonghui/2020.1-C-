#include <stdio.h>
int main(){
	int a;
	printf("임의의 수를 입력하세요. ");
	scanf("%d", &a);
	if(a%4!=0) printf("%d: 4의 배수 NO\n", a);
	else printf("%d: 4의 배수 YES\n", a); 
	return 0;
}
