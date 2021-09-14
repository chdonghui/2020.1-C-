#include <stdio.h>
#include <stdlib.h>
int main(){//************************************
	FILE *f = fopen("설문조사.txt", "r");
	
	char name[10] = {0, };
	char age[10] = {0, };
	char mov[10] = {0, };
	char cmd[100] = {0, };
	
	fscanf(f, "%s %s %[^\n]", name, age, mov);
	sprintf(cmd, "start https://www.google.com.search?q=%s^&tbm=vid", mov);
	system(cmd);
	
	fclose(f);
	return 0;
}
