//JUNIOR SOFTWARE ACADEMY!
//JUNIOR
//출력 (빈칸 채우기) 
#include <stdio.h>
int main(){
	
	char c[25] = {"JUNIOR SOFTWARE ACADEMY!"};
	
 	printf("%s\n", c);
 	
 	c[6] = '\0'; //'\0'null문자를 넣어 뒤에를 제거한다. 
 	
 	printf("%s", c);
	
	/*
	결과: 
		JUNIOR SOFTWARE ACADEMY!
		JUNIOR
	*/
	return 0;
}
