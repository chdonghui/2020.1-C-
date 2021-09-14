#include <stdio.h>
int main(){
	
		FILE *f = fopen("Ä£±¸.html", "w");
		
		fprintf(f, "<h1>Ä£±¸</h1>");
		
		fclose(f);
		
		return 0;
		
}
