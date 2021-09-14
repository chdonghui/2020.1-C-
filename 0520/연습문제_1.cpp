#include <stdio.h>
int main(){
	
		FILE *f = fopen("模备.html", "w");
		
		fprintf(f, "<h1>模备</h1>");
		
		fclose(f);
		
		return 0;
		
}
