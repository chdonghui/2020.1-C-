#include <stdio.h>
int main(){
	for (int i=1; i<=15; i++){
		for (int j=i; j<=15; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
