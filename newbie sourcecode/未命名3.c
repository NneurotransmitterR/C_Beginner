#include <stdio.h>
int main()
{
	int m, n;
	int i, j;
	int cnt=0;
	int isprime;
	printf("�밴��������������������\n"); 
	label:
	scanf("%d %d", &m, &n);
	if (m<=n && n>=2){
	m=2;
	for (i=m; i<=n; i++){
		isprime=1;
		for (j=2; j<i-1; j++){
			if(i%j==0){
				isprime=0;
				break;
			}
		} 
		
		if (isprime==1){
		printf("%d ", i); cnt++; 
	}
	}
	printf("��%d������\n", cnt);
}else{
	printf("�����°�Ҫ�����룡\n");
	goto label;
}
	return 0;
	
}

