#include <stdio.h>
int main(){
	
		FILE *f = fopen("jsa2.html", "w");
		
		fprintf(f, "<h2>Hello Junior Software Academy!</h2>");
		
		fclose(f);
		
		return 0;
		
}
