#include <stdio.h>
int main(){
	FILE *f = fopen("��������.txt", "r");
	char s[10] = {0, };
	
	fscanf(f, "%s", s);
	printf("%s\n", s);
	
	fclose(f);
	
	return 0;
}
