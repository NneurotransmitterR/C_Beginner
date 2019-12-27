#include <stdio.h>

int main()
{
	const int size = 3;
	int board[size][size];
	int i,j;
	int numofX, numofO;
	int result=-1;     //-1：tied   1：X win   0：O win 
	
	//读入一个size*size的矩阵，使用for循环遍历。
	for (i=0; i<size; i++){
		for (j=0; j<size; j++){
			scanf("%d", &board[i][j]);   //用1来表示X，0来表示O 
		}
	} 
	//检查行
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
	//检查列
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
	//检查主对角线
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
	//检查副对角线 
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
		printf("平局！"); 
	}else if(result=1){
		printf("X赢了！");
	}else{
	printf("O赢了！") ;
    }
	
	
	return 0;
 } 
