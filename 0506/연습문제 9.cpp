//JUNIOR SOFTWARE ACADEMY!
//JUNIOR
//��� (��ĭ ä���) 
#include <stdio.h>
int main(){
	
	char c[25] = {"JUNIOR SOFTWARE ACADEMY!"};
	
 	printf("%s\n", c);
 	
 	c[6] = '\0'; //'\0'null���ڸ� �־� �ڿ��� �����Ѵ�. 
 	
 	printf("%s", c);
	
	/*
	���: 
		JUNIOR SOFTWARE ACADEMY!
		JUNIOR
	*/
	return 0;
}
