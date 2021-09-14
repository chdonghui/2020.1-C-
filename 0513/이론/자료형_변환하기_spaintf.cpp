#include <stdio.h>
int main(){
	
	char name[5] = "JACK";
	printf("hello %s\n", name);
	
	char buf[20] = {0, };
	sprintf(buf, "hello %s", name);
	printf("buf=%s, name=%s", buf, name);
	
	
	return 0;
}

