#include <stdio.h>
#include <stdlib.h> 
int main(){
	
		FILE *f = fopen("jsa6.html", "w");
		int mode = 0;
		
		char menu[4][100] = {"JIM", "JSA", "Mr. Junior", "Great JSA"};
		
		printf("���������� ǥ���ϰ� ���� ������ �������ּ���\n");
		printf("[1] �̴��� �αⰡ��\n"); 
		printf("[1] �̴��� �α� ���\n");
		printf("[1] �̴��� �α� ������ ����\n");
		printf("[1] �̴��� �α� ��ȭ\n");
		printf("��ȣ�Է�(1~4): ");
		
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
