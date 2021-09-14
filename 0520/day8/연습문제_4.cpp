#include <stdio.h>
#include <stdlib.h> 
int main(){
	
		FILE *f = fopen("jsa5.html", "a");
		char html[100] = {0, };
		
		scanf("%[^\n]", html);
		
		fprintf(f, "%s", html);
		
		fclose(f);
		
		system("jsa5.html");
		
		return 0;
		
}
