#include <stdio.h>
int main(){
	
		FILE *f = fopen("ģ��.html", "w");
		
		fprintf(f, "<h1>ģ��</h1>");
		
		fclose(f);
		
		return 0;
		
}
