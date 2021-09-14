#include <stdio.h>
int main(){
	
	int number = 81;
	char old[3] = {0,};
	
	sprintf(old, "%d", number); 
	printf("%d->%s", number, old);
	
	return 0;
}

