#include <stdio.h>
int main(){
	FILE *f = fopen("설문조사.txt", "r");
	
	char name[10] = {0, };
	char age[10] = {0, };
	char favo[10] = {0, };
	
	fscanf(f, "%s ", name);
	fscanf(f, "%s ", age);
	fscanf(f, "%s ", favo);
	printf("%s %s %s\n", name, age, favo);
	
	fclose(f);
	
	return 0;
}
