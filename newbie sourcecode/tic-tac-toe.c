#include <stdio.h>

int main()
{
	const int size = 3;
	int board[size][size];
	int i,j;
	int numofX, numofO;
	int result=-1;     //-1��tied   1��X win   0��O win 
	
	//����һ��size*size�ľ���ʹ��forѭ��������
	for (i=0; i<size; i++){
		for (j=0; j<size; j++){
			scanf("%d", &board[i][j]);   //��1����ʾX��0����ʾO 
		}
	} 
	//�����
	for (i=0; i<size && result==-1; i++){
		numofO=numofX=0;
		for (j=0; j<size; j++){
			if (board[i][j]==1){
			numofX ++;}
			else{
				numofO++;
			} 
		}
		if (numofO==size){
			result=0;
		}else if(numofX==size){
			result=1;
		}
		}
	//�����
	if (result==-1){
			for (j=0; j<size && result==-1; j++){
		numofO=numofX=0;
		for (i=0; i<size; i++){
			if (board[i][j]==1){
			numofX ++;
			}else{
				numofO++;
			} 
		}
		if (numofO==size){
			result=0;
		}else if(numofX==size){
			result=1;
		}
		}
	} 
	//������Խ���
	if (result==-1){
	numofO = numofX = 0;
	for (i=0; i<size; i++){
		if (board[i][i]==1){
			numofX++;
		}else{
			numofO++;
		}
	} 
	if (numofO==size){
		result=0;
	}else if(numofX==size){
		result=1;
	}
    }
	//��鸱�Խ��� 
	if (result==-1){
	numofO = numofX = 0;
	for  (i=0; i<size; i++){
		if (board[i][size-i-1]==1){
			numofX++;
		}else{
			numofO++;
		}
		
	}
   }
	
	if (result==-1){
		printf("ƽ�֣�"); 
	}else if(result=1){
		printf("XӮ�ˣ�");
	}else{
	printf("OӮ�ˣ�") ;
    }
	
	
	return 0;
 } 
