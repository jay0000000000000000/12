#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "board.h"

#define MAX_DIE    6



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void opening(void)
{
	printf("========================================\n");
	printf("please press enter to continue...\n");
	printf("========================================\n");
	
}


int rolldie(void)
{
	return rand()%MAX_DIE+1;
}



int main(int argc, char *argv[]) 
{
	int pos = 0;
	srand((unsigned)time(NULL) );
	
	//opening
	opening();
	
	//초기화 앤나 플레이어 이름 결정
	board_initboard();
	
	//반복문(플레이어 턴)
	do
	{
		int step = rolldie();
		int coinResult;
		char c;
		
		board_printBoardStatus();
		
		pos += step;
		//printf();
		coinResult = board_getBoardCoin(pos);
		
		printf("press any key to continue:");
		scanf("%d", &c);
		fflush(stdin);
	}
	while(1);
	  //플레이어의 상태 출력
	  //주사위 던지기
	  //이동
	  //동전 줍기
	  //다음 턴
	  //if(조건:모든 플레이어가 한 번씩 턴을 돔) 
	     //상어 동작 
	     
	     
    //정리 (승자 계산, 출력 등) 
	
	
	
	
	
	
	system("PAUSE");
	return 0;
}
