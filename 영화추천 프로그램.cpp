#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h> 
int main(){
	int select[4]={0, }, naverCord, distr, boolen;
	char cmd[100]={0, };
	
	printf("\t\t***경고***\n 추천되는 영화의 개수가 적을 수 있습니다\n");
	
	printf("\n영화를 추천해주는 프로그램입니다.\n");
	printf("NAVER Movie를 이용합니다.\n");
	printf("보고싶은 영화의 분야를 선택해주세요.\n");
	
	printf("1. 로봇 영화 2. 우주 영화 3. 정보보안 영화\n");
	
	scanf("%d", &select[0]);
	distr = select[0];
	
	switch(select[0]){
		case 1:
				printf("로봇이 입력되었습니다.\n");
				printf("보고싶은 영화를 선택해주세요.\n");
				printf("1. 아이로봇 2. 월-E 3. A.I.\n");
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
				printf("우주가입력되었습니다.\n");
				printf("보고싶은 영화를 선택해주세요.\n");
				printf("1. 2001 스페이스 오디세이 2. 인터스텔라 3. 마션\n");
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
				printf("정보보안이 입력되었습니다.");
				printf("보고싶은 영화를 선택해주세요.\n");
				printf("1. 스노든 2. 리스크(Risk) 3. 이미테이션 게임\n");
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
	 	printf("영화를 잘못 입력하셨습니다.\n 프로그램을 종료합니다.\n");
	 	Sleep(3000);
	 	return 1;
	}else{
		printf("영화 분야를 잘못 입력하셨습니다.\n프로그램을 종료합니다.\n");
		Sleep(3000);
		return 1;
	}
	system("pause");
	return 0;
}
