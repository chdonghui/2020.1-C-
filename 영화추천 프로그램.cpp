#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h> 
int main(){
	int select[4]={0, }, naverCord, distr, boolen;
	char cmd[100]={0, };
	
	printf("\t\t***���***\n ��õ�Ǵ� ��ȭ�� ������ ���� �� �ֽ��ϴ�\n");
	
	printf("\n��ȭ�� ��õ���ִ� ���α׷��Դϴ�.\n");
	printf("NAVER Movie�� �̿��մϴ�.\n");
	printf("������� ��ȭ�� �о߸� �������ּ���.\n");
	
	printf("1. �κ� ��ȭ 2. ���� ��ȭ 3. �������� ��ȭ\n");
	
	scanf("%d", &select[0]);
	distr = select[0];
	
	switch(select[0]){
		case 1:
				printf("�κ��� �ԷµǾ����ϴ�.\n");
				printf("������� ��ȭ�� �������ּ���.\n");
				printf("1. ���̷κ� 2. ��-E 3. A.I.\n");
				scanf("%d", &select[1]);
				if(select[distr] == 1){
					boolen=1;
					naverCord=38420;
				}else if(select[distr] == 2){
					boolen=1;
					naverCord=69105;
				}else if(select[distr] == 3){
					boolen=1;
					naverCord=31268;
				}else{
					boolen=0;
					printf("\n");
				}
					
				break;
		case 2:
				printf("���ְ��ԷµǾ����ϴ�.\n");
				printf("������� ��ȭ�� �������ּ���.\n");
				printf("1. 2001 �����̽� ������ 2. ���ͽ��ڶ� 3. ����\n");
				scanf("%d", &select[2]);
				if(select[distr] == 1){
					boolen=1;
					naverCord=31595;
				}else if(select[distr] == 2){
					boolen=1;
					naverCord=45290;
				}else if(select[distr] == 3){
					boolen=1;
					naverCord=129049;
				}else{
					boolen=0;
					printf("\n");
				}
				break;
		case 3:
				printf("���������� �ԷµǾ����ϴ�.");
				printf("������� ��ȭ�� �������ּ���.\n");
				printf("1. ����� 2. ����ũ(Risk) 3. �̹����̼� ����\n");
				scanf("%d", &select[3]);
				if(select[distr] == 1){
					boolen=1;
					naverCord=134887;
				}else if(select[distr] == 2){
					boolen=1;
					naverCord=163419;
				}else if(select[distr] == 3){
					boolen=1;
					naverCord=113348;
				}else{
					boolen=0;
					printf("\n");
				}
				break;
		default:
			printf("\n");
 	}
 	if(boolen==1){
 		sprintf(cmd,"start https://movie.naver.com/movie/bi/mi/basic.nhn?code=%d",naverCord);
	 	system(cmd);
	}else if(boolen==0){
	 	printf("��ȭ�� �߸� �Է��ϼ̽��ϴ�.\n ���α׷��� �����մϴ�.\n");
	 	Sleep(3000);
	 	return 1;
	}else{
		printf("��ȭ �о߸� �߸� �Է��ϼ̽��ϴ�.\n���α׷��� �����մϴ�.\n");
		Sleep(3000);
		return 1;
	}
	system("pause");
	return 0;
}
