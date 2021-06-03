#include <stdio.h>
#include <stdlib.h> //standard library
#include <time.h> //time 사용
int main(){
    //break, continue, goto
    
    int i;
    // < break >
    srand(time(NULL)); //시간 단위를 적용한 랜덤 수
    for(i=1; i<=1000; i++){
        int rnd=rand()%10+1; //랜덤한 수, 똑같은 랜덤의 수가 계속 나옴(정해져 있는 값들)
        printf("%d\n",rnd);
        
        if(rnd==5){
            break;
        }
    }
    
    // < continue >
    for(i=0; i<10; i++){
        if(i%2==0){
            //턴을 패스해버린다. 
            continue; //짝수이면 Hello World 를 출력하지 말고 위로 넘어간다. => 홀수만 출력됨
        }
        printf("Hello World %d\n",i);
    }
    
    
    // < goto >
    printf("hi \n");
    //goto 는 아주 강력함 => 독이든 성배 (디버깅) => 최대한 쓰지마라 
    // 바로 보내고 싶은 곳으로 보낼 수 있음
    // 출력 결과 hi 출력후 ( bye 와 hello는 생략되고 ) !!end!! 만 출력됨
    goto end; // 레이블
    printf("bye \n");
    printf("hello \n");
end: //레이블
    printf("!!end!! \n");
    return 0;
}
