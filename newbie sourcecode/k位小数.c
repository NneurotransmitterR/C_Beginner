#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
//-std=c99
void func(double m, double n, int k);
int f(int n);

int main()
{
	double m,n;
	int k;
	rewrite:
	scanf("%lf %lf %d", &m, &n, &k);
	
	if (m>0 && n>0 && k>0){
		
		func(m ,n, k);
		
	}else{
		printf("�������������룡\n");
		goto rewrite; 
		scanf("%lf %lf %d", &m, &n, &k);
	}
		
	return 0;
}


void func(double m, double n, int k)
{
   int a;
   a = (int) m/n;              //�������� 
   double r= m/n;
   double b = r - a;          //�����ȥ�������� ����0.xxxxx 
   long long p = pow(10, k+1);    //10��k+1�η� 
   long long c = p*b;             //���ڣ�����Ҫ��k+1λС��0.xxx�����k+1λ��������xxx 
   long long result = c/10;       //��Ҫ��kλ����������δ��λ�� 
   long long x = pow(10, k);

/*ע�⣬����pow()����double���ͣ�����ǿ��תΪlong long����������Ҫ����������*/   
 
//����ȡ��k+1λ���ж��Ƿ���Ҫ��λ 
   int d = c%10;

   if (d>=5){
   	result ++;
   } 
   
   int bit=f(result);    //���Ҫ���������������ǾͰ��Ǹ�����д���� 
   
   if ( bit > k ){       //���result����������Ҫ��λ��k
       a++;
       result -= x;
   }
   printf("%d.", a);
   
   if ( bit < k ){       //���result����������Ҫ��λ��k
       int i=1;
       for (i=1; i<= k-bit; i++ )       printf("0");
   
   }      
//   
   

   printf("%lld", result);

//���洿��Ϲ�� 
//����������ֽ����kλ����   �������� 
/*    
	if (result==0){
		int i; 
		for (i=0; i<k; i++){
			printf("0");
		}
	}else{
	
		int cnt = 0;
	    long long t = result;
	    long long mask = 1;
	    while(t>9) {
	    	t /= 10;
	    	mask *= 10;
		}
	    
		do{
	    	int d = result/mask;
	    	
	    	printf("%d", d);        //���ÿһλ�� 
	        result %= mask;
	        mask /= 10; 	
	      }while(mask>0);
	   
       }
 */      
} 

int f(int n)   //�˺����ж�nΪ��λ�� 
{
	int sum=0;
    
    while(n){
        sum++;
        n/=10;
    } 
    return sum;
	
}

//��Ҫѧ�ң���������̫�����ˡ� 


/*����

���� 99 100 1    99 100 4     1 7 5         97 95 1         785.43  256.07 4          1 999.9 8 



��� 1.0         0.9900 	  0.14286         1.0           3.0672                    0.00100010



*/ 
