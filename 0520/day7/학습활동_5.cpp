#include <stdio.h>
int main(){
	
	char str[3][9] = {"HELLO", "JUNIOR", "SOFTWARE"};
	str[0][5] = ' ';
	str[1][6] = ' ';
	printf("%s", str[0]);
	printf("%s", str[1]);
	printf("%s", str[2]);
	return 0;
}
