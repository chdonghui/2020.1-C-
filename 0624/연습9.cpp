#include <stdio.h>
int main(){
	int a, b;
	printf("두 수를 입력하세요. ");
	scanf("%d %d", &a, &b);
	if(a%6!=0)printf("%d: 6의 배수 NO\n", a);
	else printf("%d: 6의 배수 YES\n", a);
	if(b%6!=0)printf("%d: 6의 배수 NO\n", b);
	else printf("%d: 6의 배수 YES\n", b);
	return 0;
}
