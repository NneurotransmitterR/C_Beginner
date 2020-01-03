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
		printf("错误！请重新输入！\n");
		goto rewrite; 
		scanf("%lf %lf %d", &m, &n, &k);
	}
		
	return 0;
}


void func(double m, double n, int k)
{
   int a;
   a = (int) m/n;              //整数部分 
   double r= m/n;
   double b = r - a;          //结果减去整数部分 ，得0.xxxxx 
   long long p = pow(10, k+1);    //10的k+1次方 
   long long c = p*b;             //现在，你想要的k+1位小数0.xxx变成了k+1位“整数”xxx 
   long long result = c/10;       //想要的k位“整数”（未进位） 
   long long x = pow(10, k);

/*注意，函数pow()返回double类型，在这强制转为long long否则下面又要出精度问题*/   
 
//下面取第k+1位，判断是否需要进位 
   int d = c%10;

   if (d>=5){
   	result += 1;
   } 
   
   int bit=f(result);    //如果要求不能有其他函数那就把那个函数写进来 
   
   if ( bit > k ){       //如果result超出我们想要的位数k
       a++;
       result -= x;
   }
   printf("%d.", a);
   
   if ( bit < k ){       //如果result少于我们想要的位数k
       int i=1;
       for (i=1; i<= k-bit; i++ )       printf("0");
   
   }      
//   
   




//下面来正序分解输出k位整数   ！！！！ 
    
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
	    	
	    	printf("%d", d);        //输出每一位。 
	        result %= mask;
	        mask /= 10; 	
	      }while(mask>0);
	   
       }
} 

int f(int n)   //此函数判断n为几位数 
{
	int sum=0;
    
    while(n){
        sum++;
        n/=10;
    } 
    return sum;
	
}

//不要学我，变量命名太混乱了。 


/*测试

输入 99 100 1    99 100 4     1 7 5         97 95 1         785.43  256.07 4          1 999.9 8 



输出 1.0         0.9900 	  0.14286         1.0           3.0672                    0.00100010



*/ 
