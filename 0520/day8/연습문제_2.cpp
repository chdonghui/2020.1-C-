#include <stdio.h>
#include <stdlib.h> 
int main(){
	
		FILE *f = fopen("jsa3.html", "w");
		
		fprintf(f, "Hello Junior Software Academy!");
		
		fclose(f);
		
		system("jsa3.html");
		
		return 0;
		
}
