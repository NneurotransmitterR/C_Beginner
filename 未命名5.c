#include <stdio.h>

int main(int argc, char **argv) {
    double malv, weishu, shengdao;
    double pinlv;
    printf("���������ʣ�kBps��������λ����bit������������\n");
    scanf("%lf %lf %lf", &malv, &weishu, &shengdao);
    
    pinlv=malv*8/shengdao/weishu;
    printf("����Ƶ��Ϊ��%f kHz\n", pinlv);
    
    return 0;
}

