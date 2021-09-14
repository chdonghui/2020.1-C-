#include <stdio.h>
#include <stdlib.h> 
int main(){
	
		FILE *f = fopen("jsa6.html", "w");
		int mode = 0;
		
		char menu[4][100] = {"JIM", "JSA", "Mr. Junior", "Great JSA"};
		
		printf("웹브라우저에 표시하고 싶은 내용을 선택해주세요\n");
		printf("[1] 이달의 인기가수\n"); 
		printf("[1] 이달의 인기 드라마\n");
		printf("[1] 이달의 인기 스포츠 선수\n");
		printf("[1] 이달의 인기 영화\n");
		printf("번호입력(1~4): ");
		
		scanf("%d", &mode);
		
		fprintf(f, "<html>");
		fprintf(f, "<marquee direction=UP>");
		fprintf(f, "menu[mode-1]");
		fprintf(f, "</marquee>");
		fprintf(f, "</html>");
		fclose(f);
		
		system("jsa6.html");
		
		return 0;
		
}
