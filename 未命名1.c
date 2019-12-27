#include <stdio.h>
void two(float x, float y, float *aa, float *bb);
int main(){
	float a=5.5;
	float b=4.5;
	
	two(a, b, &a, &b);
	printf("%f, %f\n", a, b);
	return 0; 
} 
void two(float x, float y, float *aa, float *bb){
    *aa=x+y;
	*bb=x-y;	
}

