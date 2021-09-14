#include <stdio.h>
int main(){
	
	char str[2][20] = {"HELLO WORLD", "JUNIOR HIGH SCHOOL"};
	str[0][6] = '\0';
	str[1][7] = '\0';
	printf("%s\n", str[0]);
	printf("%s\n", str[1]);
	return 0;
}
