//��·��֧��switch-case�� 
#include <stdio.h>
int main()
 {
 	int type;
 	
 	scanf("%d", &type);
 	
 	switch (type) {
 		case 1:
 			printf("���\n");
			break;  /*���û��break�������������ֱ������break*/ 
		case 2:
		    printf("���Ϻ�\n");
			break;
		case 3:
		    printf("���Ϻ�\n");
			break;
		case 4:
		    printf("�ټ�\n");			  
 	        break;
 	    default:
 	    	printf("����ʲô����\n");
 	    	break;
	 }
 	
//ע�⣺switch-case���������� 
 	
return 0; 	
  } 
