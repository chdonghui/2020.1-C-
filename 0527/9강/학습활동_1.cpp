#include <stdio.h>
#include <stdlib.h>
int main(){//************************************
	FILE *f = fopen("설문조사.txt", "r");
	
	char name[10] = {0, };
	char age[10] = {0, };
	char favo[10] = {0, };
	
	fscanf(f, "%s %s %s", &name, &age, &favo);
	fprintf(f, "%s, %s, %s", name, age, favo);
	
	fclose(f);
	return 0;
}
