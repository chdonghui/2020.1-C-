#include <stdio.h>
int main(){
	int a=10, b=10, c=5;
	int x, y, z;
	x=(a==b)&&(b==c); //1 0
	y=(a>b)||(b>c); //0 1
	z= !(a+b>c); // 1
	printf("a=%d b=%d c=%d\n", a, b, c);
	printf("x= %d\n", x); //0
	printf("y= %d\n", y); //1
	printf("z= %d\n", z); //0
} 
