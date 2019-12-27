#include <stdio.h>

int main(int argc, char **argv) {
    double malv, weishu, shengdao;
    double pinlv;
    printf("请输入码率（kBps）、量化位数（bit）及声道数：\n");
    scanf("%lf %lf %lf", &malv, &weishu, &shengdao);
    
    pinlv=malv*8/shengdao/weishu;
    printf("采样频率为：%f kHz\n", pinlv);
    
    return 0;
}

