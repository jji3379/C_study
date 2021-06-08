#include <stdio.h>
int main(){
    int box;
    printf("당신이 제일 좋아하는 숫자는 무엇입니까? =");
    scanf("%d",&box); // 공백 못 받아들임, gets() 는 공백 받을 수 있음, scanf_s : scanf 업그레이드 버전 
    printf("\n 당신의 키는 %d 입니다.",box);
    //gets(a), puts(a)
    return 0;
}
