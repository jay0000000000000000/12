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
	
	//�ʱ�ȭ �س� �÷��̾� �̸� ����
	board_initboard();
	
	//�ݺ���(�÷��̾� ��)
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
	  //�÷��̾��� ���� ���
	  //�ֻ��� ������
	  //�̵�
	  //���� �ݱ�
	  //���� ��
	  //if(����:��� �÷��̾ �� ���� ���� ��) 
	     //��� ���� 
	     
	     
    //���� (���� ���, ��� ��) 
	
	
	
	
	
	
	system("PAUSE");
	return 0;
}
